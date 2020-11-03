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
   .equ CONST, 15


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

num_elem:
	.int	0


.section .text # section identifier : code
	.global add_byte # void add_byte(char, int*, int*)


add_byte:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
# Save Registers
######################################################
#pushl %ebx
pushl %esi
pushl %edi
######################################################
	
	movl 8(%ebp), %ecx		#x
	movl 12(%ebp), %esi		#vec1
	movl 16(%ebp), %edi		#vec2
	
	movl (%esi), %eax
	movl %eax, num_elem
	movl %eax, (%edi)
	addl $4, %esi
	addl $4, %edi
	
	loop:
		cmpl $0, num_elem
		je end
		movl $0, %eax
		movl $0, %edx
		movl (%esi), %edx
		movb %dl, %al
		addl %ecx, %eax
		movb %al, %dl
		movl %edx, (%edi)
		subl $1, num_elem
		addl $4, %esi
		addl $4, %edi
		jmp loop
	
	end:

# Restore Regsiters
######################################################
popl %edi
popl %esi
#popl %ebx
######################################################


	# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
	ret







