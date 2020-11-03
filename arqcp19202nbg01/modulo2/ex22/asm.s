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
	i:				
	.int 2
	j:				
	.int 1
	




.section .text # section identifier : code
	.global f # int f(void)
	.global f2 # int f2(void)
	.global f3 # int f3(void)
	.global f4 # int f4(void)


f:
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
		movl $0, %ebx			#limpar registos
					
			
		movl i, %eax
		movl j, %ebx
		
		cmp %eax, %ebx
		je i_igual_j			# Se i == j entao salta
		addl %ebx, %eax
		movl $1, %ebx
		subl %ebx, %eax
		jmp end

i_igual_j:
		subl %ebx, %eax
		movl $1, %ebx
		addl %ebx, %eax

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

f2:
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
		movl $0, %ebx			#limpar registos
		movl $1, %ecx			#Limpar registo de ecx com 1 pois vou necessitar do valor			
			
		movl i, %eax
		movl j, %ebx
		
		cmp %ebx, %eax
		jg i_maior_j	
		addl %ecx, %ebx
		jmp end1

i_maior_j:
		subl %ecx, %eax

end1:
		mull %ebx

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


f3:
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
		movl $0, %ebx			#limpar registos
		movl $0, %ecx						
		movl $0, %esi
		movl $0, %edx			#se nao limpar edx da um erro por causa da divisao
			
		movl i, %ebx
		movl j, %ecx
		
		
		cmp %ebx, %ecx
		je i_maiorOuIgual_j
		jl i_maiorOuIgual_j	
		addl %ecx, %esi
		addl %ebx, %esi			#esi = h = i + j
		addl %esi, %eax			#eax = g = i + j
		movl $2, %ebx
		addl %ebx, %eax
		jmp end2
		
i_maiorOuIgual_j:
		movl %ebx, %eax
		mull %ecx
		movl %eax, %esi			# esi = h = i * j
				
		movl %ebx, %eax
		movl $1, %ebx
		addl %ebx, %eax			# eax = g = i + 1
		
end2:
		divl %esi

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


f4:
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
		movl $0, %ebx			#limpar registos
		movl $0, %ecx						
		movl $0, %edx
			
		movl i, %ebx
		movl j, %ecx
		movl %ebx, %edx
		addl %ecx, %edx			# i + j
		cmp $10, %edx
		jl i_mais_j_menor_10
		movl %ecx, %eax
		mull %ecx
		movl $3, %ecx
		divl %ecx
		jmp end3

i_mais_j_menor_10:
		movl %ebx, %eax
		mull %ebx
		movl $4, %ebx
		mull %ebx
				
		
end3:
		

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







