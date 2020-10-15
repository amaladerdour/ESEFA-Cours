.data
chaine1 : .asciiz "saisir votre nom : "
chaine2 : .asciiz "saisir le Prenom : "
chaine3 : .asciiz "saisir l'age: "
ch : .asciiz "le nome :"
chaine5 : .asciiz "le prenome :"
chaine6 : .asciiz "l'age :"
#arr : .word 
.text
#l'affichage
li $v0,4
la $a0,chaine1
syscall
#la lecteur de nom
lw $v0,5
syscall
#stocker le nom
move $t0,$v0
#affichage de 2eme message 
li $v0,4
la $a0,chaine2
syscall
#la lecteur prenom
lw $v0,5
syscall
#stocker le prenom
move $t1,$v0
#affichage de 2eme message 
li $v0,4
la $a0,chaine2
syscall
#la lecteur age
li $v0,5
syscall
#stocker l'age
move $t2,$v0
#afficher la fiche descriptive
li $v0,4
la $a0,ch
syscall

li $v0,4
la $a0,($t0)
syscall

li $v0,4
la $a0, chaine5
syscall

li $v0,4
la $a0,($t1)
syscall

li $v0,4
la $a0, chaine6
syscall

li $v0,4
la $a0,($t2)
syscall

