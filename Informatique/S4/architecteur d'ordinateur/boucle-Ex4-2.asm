.data
message : .asciiz "Bonjour! programme qui calculer la suit des d'ent\n"

message2 : .asciiz "saisir une suit d'entie:\n"
somme : .asciiz "la somme est:"
.text
# affichage de message
li $v0 ,4
la $a0, message
syscall

li $v0, 4
la $a0, message2
syscall
loop:
   #lire des chiffre
      li $v0, 5
      syscall
   move $t1,$v0# stock la valeur de v0 en t1 
   add $t0 ,$t0,$t1
   bnez $t1,loop#test si t1 ==0  sortie
   
#l'affichage de message somme  
   li $v0, 4
   la $a0 ,somme
   syscall
#l'affichage de résultat
     li $v0,1
     la $a0, ($t0)
     syscall
   

                                                          
