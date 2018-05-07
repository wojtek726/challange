<?php

session_start();


?>


<!doctype html>
<html>
     <head>
          <meta charset="UTF-8" />
          <title>Średniowiecze</title>
     </head>
     <body>
        <?php
        echo "Witaj ".$_SESSION['imie']." [ <a href='wyloguj.php'>WYLOGUJ</a> ]<br/><br/><br/>";
        echo "Drewno: <b>".$_SESSION['drewno']."</b> | Kamień: <b>".
                $_SESSION['zboze']."</b> | Zboże: <b>".$_SESSION['kamien']; 
        echo "</b><br/><br/>";
        
        echo "Ratusz(poziom ".$_SESSION['ratusz'].")";
        echo "<br/>Tartak(poziom ".$_SESSION['tartak'].")";
        echo "<br/>Kopalnia(poziom ".$_SESSION['kopalnia'].")";
        echo "<br/>Spichlerz(poziom ".$_SESSION['spichlerz'].")";
        ?>
     </body>
</html>
