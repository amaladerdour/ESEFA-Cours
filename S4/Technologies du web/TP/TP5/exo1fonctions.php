<?php

function ma_fonction($tab){
  $taille = sizeof($tab);
  $neg = 0;
  $pos = 0;
  for ($i=0; $i < $taille; $i++) {
    if ($tab[$i] < 0) {
      $neg++;
    }else {
      $pos++;
    }
  }
  if ($pos - $neg > 0) return 1;
  if ($pos - $neg < 0) return -1;
  return 0;
}

function dh2euro($dirhams){
  $somme = 0;
  for ($i=0; $i < sizeof($dirhams); $i++) {
    print $dirhams[$i]." Dhs = ".(10 * $dirhams[$i])." Euros<br>";
    $somme += 10 * $dirhams[$i];
  }
  print("Somme = ".$somme." Euros");
}
