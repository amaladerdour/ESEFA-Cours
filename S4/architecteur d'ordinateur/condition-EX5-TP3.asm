.data
message1 : .asciiz "saisir la 1 er nombre :"
message2 : .asciiz "saisir la 2 eme nombre :"

messageEgo :.asciiz " est ego "
messageSup :.asciiz " est sup "
messageInf :.asciiz " est inf: "

.text
li $v0,4
la $a0,message1
syscall
  li $v0,5
  syscall
  move $t0,$v0
li $v0, 4
la $a0, message2
syscall 
  li $v0,5
  syscall
  move $t1, $v0

beq $t0,$t1,Egal
bgt $t0,$t1,SUP
blt $t0,$t1,Inf

Egal :
li $v0,4
la $a0, messageEgo
syscall
j Exit

SUP :
 
li $v0,1
la $a0, ($t0)
syscall

li $v0,4
la $a0,messageSup
syscall
  
 j Exit
Inf :

li $v0,1
la $a0, ($t0)
syscall
  
  li $v0,4
la $a0, messageInf
syscall

j Exit
Exit: 
