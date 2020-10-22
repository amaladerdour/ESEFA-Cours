.data
message1 : .asciiz "Saisir un nombre: "
messagePaire : .asciiz "le nombres est paire."
messageImpaire : .asciiz "le nombre est impaire"
.text 
li $v0,4
la $a0, message1
syscall
  li $v0,5
  syscall
  move $t0,$v0

div $t1,$t0, 2

beq $t1,0,paire
bne $t1,0,impaire

paire:
li $v0,4
la $a0,messagePaire
syscall
j Exit

impaire:
li $v0,4
la $a0,messageImpaire
syscall
j Exit
Exit: