<?php
  //Question 4
  require("exo1fonctions.php");
  
  //Question 1
  print "Nous sommes le:".date("d/m/Y")."<br>";
  print "Il est:".date("h:i")."<br>";
  print "Merci";

  //Question 2
  $tab = array(1,1,2,3,-1,0,-1,-1,-2,-3);
  print "<br>".ma_fonction($tab);

  //Question 3
  print "<br>";
  $dirhams = array(1000.0, 2300.0, 15000, 10000);
  dh2euro($dirhams);
