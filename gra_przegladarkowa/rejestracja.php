<?php

session_start();
if(isset($_SESSION['zalogowano']) && $_SESSION['zalogowano'] == true)
{
    header("Location: gra.php");
    exit();
}


$wszystko_ok = true;

if(isset($_POST['user']))
{
    $user = $_POST['user'];
//login
    if((strlen($user) < 4) || (strlen($user) > 12))
    {
        $wszystko_ok = false;
        $_SESSION['blad_login'] = "Login musi zawierać od 4 do 12 znaków.";
    }
    if(!ctype_alnum($user))
    {
        $wszystko_ok = false;
        $_SESSION['blad_login'] = "Login może zawierać tylko znaki alfanumeryczne";
    }
    
//email
    $email = $_POST['email'];
    $emailB = filter_var($email,FILTER_SANITIZE_EMAIL);
    if(!filter_var($email,FILTER_VALIDATE_EMAIL) || $email != $emailB)
    {
        $wszystko_ok = FALSE;
        $_SESSION['blad_email'] = "Podaj poprawny adres e-mail";
    }

//haslo
    $pass = $_POST['pass'];
    $pass1 = $_POST['pass1'];
    if($pass != $pass1)
    {
        $wszystko_ok = FALSE;
        $_SESSION['blad_haslo'] = "Podane hasła nie są identyczne";
    }
    if((strlen($pass) < 4) || (strlen($pass) > 12))
    {
        $wszystko_ok = false;
        $_SESSION['blad_haslo'] = "Hasło musi zawierać od 4 do 12 znaków.";
    }
    
//regulamin  
    if(!isset($_POST['regulamin']))
    {
        $wszystko_ok = false;
        $_SESSION['blad_regulamin'] = "Musisz zaakceptować regulamin";
    }
    
    
            
    if($wszystko_ok == true)
    {
        require_once 'dbconnect.php';
        unset($_SESSION['blad_login']);
        unset($_SESSION['blad_email']);
        unset($_SESSION['blad_haslo']);
        unset($_SESSION['blad_regulamin']);
        
        try
        {
            $conn = new mysqli($db_server, $db_user, $db_password, $db_name);
            if($conn->connect_error)
            {
                throw new Exception($conn->connect_error);
            }
            else
            {
                
                //sprawdzenie czy jest taki login
                
                $sql = "SELECT user FROM uzytkownicy WHERE user='$user'";            
                $rezultat = $conn->query($sql);
                if(mysqli_num_rows($rezultat) > 0)
                {     
                    $wszystko_ok = false;
                    $_SESSION['blad_login'] = "Podany login jest już zajęty.";               
                }
                
                //sprawdzanie czy jest taki mail
                
                $sql = "SELECT email FROM uzytkownicy WHERE email='$email'";            
                $rezultat = $conn->query($sql);
                if(mysqli_num_rows($rezultat) > 0)
                {     
                    $wszystko_ok = false;
                    $_SESSION['blad_email'] = "Podany e-mail jest już zajęty.";               
                }
                
                if($wszystko_ok == true)
                {
                    $pass_hash = password_hash($pass, PASSWORD_DEFAULT);
                    $sql = "INSERT INTO uzytkownicy (idusera, user, pass, email, dnipremium) VALUES ('NULL', '$user', '$pass_hash', '$email', '0')";
                    mysqli_query($conn, $sql);
                    
                    
                    
                    header("Location: witamy.php");                        
                }
                $conn->close();
            }
        } catch (Exception $ex) {
            echo $ex;

        }
        
    }
}
?>

<!doctype html>
<html>
     <head>
          <meta charset="UTF-8" />
          <title>Średniowiecze</title>
     </head>
     <body>
         <form method="POST">
             Login: <input type="text" name="user"><br/>
             <font size="2" color="red">
             <?php
                if(isset($_SESSION['blad_login'])) 
                {
                    echo $_SESSION['blad_login'];
                    unset($_SESSION['blad_login']);
                }
             ?>
             </font><br/>
             E-mail: <input type="text" name="email"><br/>
             <font size="2" color="red">
             <?php
                if(isset($_SESSION['blad_email'])) 
                {
                    echo $_SESSION['blad_email'];
                    unset($_SESSION['blad_email']);
                }
             ?>
             </font><br/>
             Hasło: <input type="password" name="pass"><br/>
             <font size="2" color="red">
             <?php
                if(isset($_SESSION['blad_haslo'])) 
                {
                    echo $_SESSION['blad_haslo'];
                    unset($_SESSION['blad_haslo']);
                }
             ?>
             </font><br/>
             Powtórz hasło: <input type="password" name="pass1"><br/>
             <input type="checkbox" name="regulamin"> Akceptuje regulamin <br/>
             <font size="2" color="red">
             <?php
                if(isset($_SESSION['blad_regulamin'])) 
                {
                    echo $_SESSION['blad_regulamin'];
                    unset($_SESSION['blad_regulamin']);
                }
             ?>
             </font><br/><br/>
             <input type="submit" value="Zarejestruj">
             
             
             
         </form>
         
     </body>
</html>

