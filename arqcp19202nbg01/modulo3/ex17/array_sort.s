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
	.global ptrvec
	.global num
		
	

.section .text # section identifier : code
	.global array_sort # void array_sort(void)



array_sort:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
# Save Registers
######################################################
pushl %ebx
pushl %esi
pushl %edi
######################################################
			
			movl $0, %eax
			movl num, %esi
			cmpl $0, %esi
			je end
			
			movl ptrvec, %esi 			
			movl $0, %edi				
			movl $0, %edx
			movl $0, %ebx
			movl %esi, %ecx
first_for:	
			cmpl num, %ebx
			je end
			movl %ebx, %edx
			jmp second_for
end_cicle:
			movl num, %eax
			subl %ebx, %eax
			imull $4, %eax
			subl %eax, %esi
			movl (%esi), %eax   #Guarda o valor de %esi (posicao inicial)
			movl (%ecx), %edi  	#Guarda o valor de %ecx (posicao do menor valor do vector)
			movl %edi, (%esi)	#Atualiza o valor da posição inicial
			movl %eax, (%ecx)	#Guarda o valor da posição inicial na posição onde foi encontrado o minimo
			
			incl %ebx
			addl $4, %esi
			movl %esi, %ecx
			jmp first_for
			
second_for:
#############################################################			
			addl $4, %esi
			movl (%esi), %eax
			movl (%ecx), %edi
			cmpl %eax, %edi			#esi - ecx <0
			jl menor_valor

compare:	
			incl %edx
			cmpl num, %edx
			je end_cicle
			jmp second_for
##############################################################

menor_valor:
			movl %esi, %ecx
			jmp compare
			
			
end:
			
			
	
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







