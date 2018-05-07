<?php

session_start();
if(isset($_SESSION['zalogowano']) && $_SESSION['zalogowano'] == true)
{
    header("Location: gra.php");
    exit();
}

?>

<!doctype html>
<html>
     <head>
          <meta charset="UTF-8" />
          <title>Średniowiecze</title>
     </head>
     <body>
         <font size='4'>Średniowiecze</font><br/><br/>
         <form action="zaloguj.php" method="post">
             
             Login:
             <input type="text" name='login' size="10"><br/>
             Hasło:
             <input type="password" name="haslo" size="10"><br/>
             
             <input type="submit" value="Zaloguj">
         </form>
         
         <font size='2' color='red'>
         <?php
         
         if(isset($_SESSION['blad_logowania']))
         {
             echo $_SESSION['blad_logowania'];
         }
         
         ?>
         </font>
     </body>
</html>

