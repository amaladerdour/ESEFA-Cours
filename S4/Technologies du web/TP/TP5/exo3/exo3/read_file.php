<?php

  $file = fopen('info.txt', 'r');

  $data = explode("\n", fread($file, filesize('info.txt')));

  for ($i=0; $i < sizeof($data)-1; $i++) {
    $infos = explode("|", $data[$i]);
    print "Prénom : ".$infos[0]."<br>";
    print "Nom : ".$infos[1]."<br>";
    print "Adresse : ".$infos[2]."<br>";
    print "CP : ".$infos[3]."<br>";
    print "Ville : ".$infos[4]."<br>";
    print "<hr>";
  }

  fclose($file);

 ?>
