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
	.global ptr1
	.global ptr2
	

.section .text # section identifier : code
	.global str_copy_porto # vois str_copy_porto(void)



str_copy_porto:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
# Save Registers
######################################################
#pushl %ebx
pushl %esi
pushl %edi
######################################################

	
	movl ptr1, %esi	#Copy ptr1 address to %esi
	movl ptr2, %edi	#Copy ptr2 address to %edi
	movl $0, %ecx	#Clean register %ecx
	
	str_loop:
		movb (%esi), %cl	#Copy char from ptr1 to %cl
		cmpb $'v', %cl		#Check if the char is 'v'
		je str_change_char		#Jump to change if it is
		movb %cl, (%edi)		#Else, copy char to ptr2
		cmpb $0, %cl		#Check if this is the end of the str
		je str_loop_end			#Jump if it is the end
		addl $1,%esi		#Move to the next char in ptr1 (char 1 byte)
		addl $1,%edi		#Move to the next char in ptr2 (char 1 byte)
		jmp str_loop		#Next iteration
		
	str_change_char:
		movb $'b', (%edi)	#Copy char 'b' to ptr2
		incl %esi			#Move to the next char in ptr1
		incl %edi			#Move to the next char in ptr2
		jmp str_loop		#Next iteration
			
	str_loop_end:		


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







