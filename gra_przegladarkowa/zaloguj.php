<?php

session_start();
require_once 'dbconnect.php';

$conn = new mysqli($db_server, $db_user, $db_password, $db_name);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$login = $_POST['login'];
$haslo = $_POST['haslo'];

$login = htmlentities($login, ENT_QUOTES, 'UTF-8');
$haslo = htmlentities($haslo, ENT_QUOTES, 'UTF-8');

$sql = "SELECT * FROM uzytkownicy WHERE user='$login' AND pass='$haslo'";
$result = $conn->query(sprintf("SELECT * FROM uzytkownicy WHERE user='%s' AND pass='%s'",
        mysqli_real_escape_string($conn,$login),
        mysqli_real_escape_string($conn,$haslo)));

if($result->num_rows > 0)
{
    $wiersz = $result->fetch_assoc();
    $_SESSION['login'] = $wiersz['user'];
    unset($_SESSION['blad_logowania']);
    $_SESSION['zalogowano'] = true;
    header("Location: gra.php");
    
}
else {
    $_SESSION['blad_logowania'] = "Błędny login lub hasło";
    header("Location: index.php");
}
$conn->close();





?>