.data
chaine1 : .asciiz "saisir 1er valeur : "
chaine2 : .asciiz "saisir 2eme valeur : "
chaine3 : .asciiz "le produit est: "

.text
#affichage 
li $v0,4
la $a0,chaine1
syscall
#la lecteur de 1 nobre
li $v0,5
syscall
#stocker la 1 valeur
move $t0,$v0
#affichage de 2eme message 
li $v0,4
la $a0,chaine2
syscall
#la lecteur de 1 nobre
li $v0,5
syscall
#stocker la 1 valeur
move $t1,$v0
#la multiplication de 2 nombre
mul $t2,$t0,$t1
#affichage de 3 eme message
li $v0,4
la $a0,chaine3
syscall
#affichage de resultat
li $v0,1
la $a0,($t2)
syscall

