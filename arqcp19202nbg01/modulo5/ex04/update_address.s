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

#typedef struct {
#       char age;
###		char padding;
#       short number;
#       int grades[10];
#       char name[80];
#       char address[120];
#} Student;

	.equ AGE_OFFSET, 0
	.equ NUMBER_OFFSET, 2
	.equ GRADES_OFFSET, 4
	.equ NAME_OFFSET, 44
	.equ ADDRESS_OFFSET, 124
	

.section .text # section identifier : code
	.global update_address # void update_address(Student*, char*)


update_address:
	# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
# Save Registers
######################################################
pushl %ebx
pushl %esi
#pushl %edi
######################################################

	movl 8(%ebp), %ecx						#%ecx = s_ptr
	leal ADDRESS_OFFSET(%ecx), %edx		#%edx = address
	
	movl 12(%ebp), %eax
	
	movl (%edx), %esi
	
	movl $0, %ebx
	
	loop:
		movb (%eax), %bl
		cmpb $0, %bl
		movb %bl, (%edx)
		je end
		addl $1, %eax
		addl $1, %edx
	jmp loop
	
	end:
	

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
