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
           echo "Witaj ".$_SESSION['login']." [ <a href='wyloguj.php'>WYLOGUJ</a> ]";
           
           ?>
     </body>
</html>
