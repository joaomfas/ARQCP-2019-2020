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
	




.section .text # section identifier : code
	.global check_num # char check_num(void)



check_num:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function

	
# Save Registers
######################################################
pushl %ebx
#pushl %esi
#pushl %edi
######################################################


	movl $0, %eax
	movl $2, %ebx
	movl $0, %edx			#Limpar registos
	
	movl num, %eax
	cdq						#Extender o sinal, caso seja negativo
	
	cmp $0, %eax
	 
	jl num_negativo		#compara se é menor que zero
		
	idivl %ebx
	
	cmp $0, %edx
	je num_par_positivo
	jmp num_imp_positivo
	
num_negativo:
	
	idivl %ebx
	
	cmp $0, %edx
	je num_par_negativo
	jmp num_imp_negativo


num_imp_negativo:
	movl $2, %eax
	jmp end
num_imp_positivo:
	movl $4, %eax
	jmp end
num_par_negativo:
	movl $1, %eax
	jmp end
num_par_positivo:
	movl $3, %eax
	jmp end

end:

# Restore Regsiters
######################################################
#popl %edi
#popl %esi
popl %ebx
######################################################



	# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
	ret













