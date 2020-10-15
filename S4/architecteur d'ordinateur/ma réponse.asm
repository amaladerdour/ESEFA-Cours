.data
chaine1 : .asciiz "saisir votre nom : "
chaine2 : .asciiz "saisir votre Prenom : "
chaine3 : .asciiz "saisir votre age: "
chaine4 : .asciiz "voilà la fiche descriptive:"
espace1 : .space 30
espace2: .space 30
espace3: .space 30
#arr : .word 
.text
#l'affichage
li $v0,4
la $a0,chaine1
syscall
#la lecteur de nom
li $v0,8
la $a0, espace1
li $a1, 10
syscall
#affichage de 2eme message 
li $v0,4
la $a0,chaine2
syscall
#la lecteur prenom
li $v0,8
la $a0, espace2
li $a1, 10
syscall
#affichage de 3eme message 
li $v0,4
la $a0,chaine3
syscall
#la lecteur age
li $v0,8
la $a0, espace3
li $a1, 10
syscall
#stocker l'age
move $t2,$v0
# la fiche descriptive
li $v0, 4
la $a0, chaine4
syscall
li $v0, 4
la $a0, espace1
syscall 
li $v0, 4
la $a0, espace2
syscall 
li $v0, 4
la $a0, espace3
syscall 
move $a0, $t2
li $v0,10
syscall

