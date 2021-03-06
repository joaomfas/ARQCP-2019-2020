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
	.global ptrdest
	.global num
	

.section .text # section identifier : code
	.global sort_asc # void sort_asc(void)

sort_asc:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
# Save Registers
######################################################
pushl %ebx
pushl %esi
pushl %edi
######################################################

	movl $0, %ecx #i
	movl $0, %ebx #j
	movl $0, %edx #j+1
	movl $0, %ecx
	movl %eax, num
	
	movl ptrdest, %esi
	subl $1, %eax
	
	first:
		cmpl $0, %eax
		je end
		movl $0, %ebx
		movl $1, %edx
		pushl %eax
		second:
			leal (%esi, %ebx, 4), %edi #array[j] in edi
			movl (%edi), %ecx
			pushl %ecx
			leal (%esi, %edx, 4), %ecx #array[j+1] in eax
			movl (%ecx), %edi
			popl %ecx
			cmpl %edi, %ecx
			jl no_switch
			movl %edi, (%esi, %ebx, 4)
			movl %ecx, (%esi, %edx, 4)
			
			no_switch:
				addl $1, %ebx
				addl $1, %edx
				subl $1, %eax
				cmpl $0, %eax
				jne second
		popl %eax
		subl $1, %eax
		jmp first
		
	end:
		movl num, %eax

# Restore Regsiters
######################################################
popl %edi
popl %esi
popl %ebx
######################################################


	# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
	ret
