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
# 				  EAX (4bytes)
#					 		AX (2bytes)					  ESI
#				 	   AH(1 byte)AL(1byte)                              SI (2 bytes)
# ######## ######## ######## ########     ######## ######## ######## ########
#
# 				  EBX
#					 		BX							  EDI
#				 	   BH		BL                                      DI (2 bytes)
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



# EM HEXADECIMAL DUAS LETRAS SAO 2 BYTES  - ALERTTTTT : http://calc.50x.eu/



# Bitwise Operations:

# NOT: Bits that are 0 become 1, and those that are 1 become 0. (Swaps)
######################################################
# NOT 0111  (decimal 7)
#   = 1000  (decimal 8)
#
# notl %edx ; edx ≔ ¬edx

# AND: If both bits in the compared are 1, the bit in the resulting binary representation is 1 (1 × 1 = 1); otherwise, the result is 0
######################################################
#     0101 (decimal 5)
# AND 0011 (decimal 3)
#   = 0001 (decimal 1)
#
# andl %edx, %ecx ; ecx ≔ edx ∧ ecx


# OR: The result in each position is 0 if both bits are 0, while otherwise the result is 1.
######################################################
#     0101 (decimal 5)
#  OR 0011 (decimal 3)
#   = 0111 (decimal 7)
#
# orl  %edx, %ecx ; ecx ≔ edx ∨ ecx

# XOR: The result in each position is 1 if only the first bit is 1 or only the second bit is 1, but will be 0 if both are 0 or both are 1.
######################################################
#     0101 (decimal 5)
# XOR 0011 (decimal 3)
#   = 0110 (decimal 6)
#
# xorl %edx, %ecx ; ecx ≔ edx ⊕ ecx

# HOW TO: GET THE VALUE
# movl STUDENT_GRADES_OFFSET(%esi), %eax

# HOT TO: GET THE ADDRESS (ir buscar o apontador, posição de memória)
# leal STUDENT_GRADES_OFFSET(%esi, 1), %eax

# caller-save temporaries

	# pushl %eax # save %eax on stack
	# pushl %edx # save %edx on stack
	# pushl %ecx # save %ecx on stack


	# popl %ecx # restore %ecx
	# popl %edx # restore %edx
	# popl %eax # restore %eax


##################################################################################################################################



# the data section allows to declare initialized variables (coming from C - declared outside main)
.section .data

	# Global Variables
	#.global num
	.equ CARRO_OFFSET, 0
	.equ TEMPOS_OFFSET, 4
	.equ TEMPO_TOTAL_OFFSET, 8


.section .text # section identifier : code

	.global tempo_total # 

tempo_total:
	
	
# Prologue
########################################
pushl %ebp # save previous stack frame pointer
movl %esp, %ebp # the stack frame pointer for sum function
########################################

# Save Registers
######################################################
pushl %ebx
pushl %esi
pushl %edi
######################################################

	movl 8(%ebp), %ecx		#Move resultados para %ecx
	leal TEMPOS_OFFSET(%ecx), %esi		
	movl 12(%ebp), %edx		#Move n_voltas para %edx
	movl $0, %eax		
	movb $255, %al	
	movl $0, %ebx
	movl $0, %edi
	movl $0, %ecx	
	
	loop_voltas:
		cmpl $0, %edx
		je end
		movb (%esi), %bl
		cmpb $251, %bl
		jl invalido
		jmp calc_segundos
		cont:
		cmpb %bl, %al
		jg tempo_mais_rapido
		addl $1, %ebx
		subl $1, %edx
		jmp loop_voltas
		
	calc_segundos:
		pushl %eax
		pushl %edx
		pushl %ecx
		movl $0, %eax
		movl $0, %ecx
		rol %ebx
		rol %ebx
		movb %bh, %al
		movl $60, %ecx
		mull %ecx
		addb %bl, %al
		addl %eax, %edi
		popl %ecx
		popl %edx
		popl %eax
		jmp cont
		
	tempo_mais_rapido:
		movl %edx, %eax
		addl $1, %ebx
		subl $1, %edx
		jmp loop_voltas
	
	invalido:
		movl $0, %eax
		leal TEMPO_TOTAL_OFFSET(%edx), %ecx
		movl $65535, (%ecx)
		jmp disq
	
	end:
		movl %edi, %esi
		movl 8(%ebp), %edx	#Resultados
		leal TEMPO_TOTAL_OFFSET(%edx), %ecx
		movl %esi, (%ecx)

	disq:
	

# Restore Regsiters
######################################################
popl %edi
popl %esi
popl %ebx
######################################################

# Epilogue
########################################
movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
popl %ebp # restore the previous stack frame pointer
########################################


ret
