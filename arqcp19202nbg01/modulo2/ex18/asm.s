#   Special Characters:

#   . – starts an assembler directive
#   # – starts a comment
#   % – starts a register name
#   $ – starts a value

# Data Types:

#   .octa – 128 bits (16 bytes) integer
#   .quad – 64 bits (8 bytes) integer
#   .double – floating point number with double precision (8 bytes)
#   .long – 32 bits (4 bytes) integer
#   .int – 32 bits (4 bytes) integer
#   .float – floating point number (4 bytes)
#   .short – 16 bits (2 bytes) integer
#   .byte – 8 bits
#   .ascii – string
#   .asciz – string automatically terminated by zero


# Constants:
#   .equ FACTOR, 3


# Sections:
#   .section .data - the data section allows to declare initialized variables (coming from C - declared outside main)
#   .section .bss - the bss section is used to define uninitialized memory areas
#   .section .text - the text section has the assembly instructions


# Registers:
#
# 				  EAX
#					 		AX							  ESI
#				 	   AH		AL                                      SI
# ######## ######## ######## ########     ######## ######## ######## ########
#
# 				  EBX
#					 		BX							  EDI
#				 	   BH		BL                                      DI
# ######## ######## ######## ########     ######## ######## ######## ########
#
# 				  ECX
#					 		CX							  EBP (Não Usar - Reservado para o Prólogo)
#				 	   CH		CL                                      BP
# ######## ######## ######## ########     ######## ######## ######## ########
#
# 				  EDX
#					 		DX							  ESP (Não Usar - Reservado para o Epílogo)
#				 	   DH		DL                                      SP
# ######## ######## ######## ########     ######## ######## ######## ########

# Alert:

#   122 – the content of memory address 122
#   $122 – the number 122
#
#   variable – the contents pointed by memory address in variable
#   $variable – the memory address of the label

# Sizes:

#   b - 8 bits
#   w - 16 bits
#   l - 32 bits




##################################################################################################################################




# Clean Registers:


# TODO



# the data section allows to declare initialized variables (coming from C - declared outside main)
.section .data
	
	A:
	.int 1
	B:
	.int 1
	.global A
	.global B
	




.section .text # section identifier : code
	.global summation # int summation(void)



summation:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function

	
# Save Registers
######################################################
pushl %ebx
pushl %esi
#pushl %edi
######################################################

	movl $0, %eax
	movl $0, %ebx
	movl $0, %ecx
	movl $0, %edx
	movl $0, %esi
	movl i, %ecx
	

head:	
	
	movl A, %eax
	movl A, %ebx
	
	
	mull %ebx				#A²
	
	movl B, %ebx
	
	cmp $0, %ebx
	je b_is_zero	
	
	divl %ebx				#A² /B

	movl %eax, %ebx 		#guarda o valor de A²/B
	
	movl %ecx, %eax
	
	mull %ecx				# i²
	
	
	
	mull %ebx				# A²/B * i²
	addl %eax, %esi
	movl n, %ebx
	
	cmp %ecx, %ebx
	je end					#enquando %ecx (i) for diferente %ebx (n)
	movl $1, %ebx			
	addl %ebx, %ecx			#Incrementa 1 a %ecx ( i++)
	jmp head				#volta ao inicio
	
	
b_is_zero:	
	addl %ebx,%esi
	jmp b_in_null
end:
	movl %esi, %eax
	
b_in_null:
	
	
# Restore Regsiters
######################################################
#popl %edi
popl %esi
popl %ebx
######################################################



	# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
	ret













