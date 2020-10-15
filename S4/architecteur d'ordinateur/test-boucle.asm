.data
message : .asciiz "Bonjour!\n"
message2 : .asciiz "saisir le nombre d'itération:"
sortie : .asciiz "au revoir"
.text
li $v0 ,4
la $a0, message2
syscall

li $v0,5
syscall
move $t0,$v0
Loop:
                                       #beq, $t0 ,0 ,exit                           
     li $v0, 4
     la $a0, message
     syscall
    addi $t0, $t0,-1                   # sub $t0, $t0,1
    bgtz $t0,Loop                   #j loop
Exit:                                #FIN:
li $v0,4
la $a0,sortie
syscall