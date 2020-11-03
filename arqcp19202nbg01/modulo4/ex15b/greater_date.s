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


.section .text # section identifier : code
	.global greater_date # int greater_date(unsigned int, unsigned int)


greater_date:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
# Save Registers
######################################################
#pushl %ebx
#pushl %esi
#pushl %edi
######################################################
	
	#Comparar anos
	movl 8(%ebp), %ecx		#date1	
	movl 12(%ebp), %edx		#date2
	shrl $8, %ecx		
	shrl $8, %edx
	andl $0xffff, %ecx		#year1
	andl $0xffff, %edx		#year2
	cmpl %ecx, %edx
	jg return_date2
	jl return_date1
	
	#Comparar meses
	movl 8(%ebp), %ecx		#date1	
	movl 12(%ebp), %edx		#date2
	shrl $24, %ecx		
	shrl $24, %edx
	andl $0xffff, %ecx		#month1
	andl $0xffff, %edx		#month2
	cmpl %ecx, %edx
	jg return_date2
	jl return_date1
	
	#Comparar anos
	movl 8(%ebp), %ecx		#date1	
	movl 12(%ebp), %edx		#date2
	andl $0xff, %ecx		#day1
	andl $0xff, %edx		#day2
	cmpl %ecx, %edx
	jg return_date2
	jl return_date1

	return_date1:
		movl 8(%ebp), %eax
		jmp end
	
	return_date2:
		movl 12(%ebp), %eax
		jmp end
	
	end:
	

# Restore Regsiters
######################################################
#popl %edi
#popl %esi
#popl %ebx
######################################################


	# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
	ret







