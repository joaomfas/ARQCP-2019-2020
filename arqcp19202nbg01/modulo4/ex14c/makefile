# exemplo de makefile com variaveis
# variaveis
INCLUDES = mixed_sum.h 
SOURCES = main.c mixed_sum.s join_bits.s
OBJFILES = main.o mixed_sum.o join_bits.o
EXEC = 14c

# suffix rules
.SUFFIXES : .c .o
.SUFFIXES : .s .o
# How to build and object .o from a code file.c ; $< -- file name
.c.o:
	gcc -Wall -g -c $<
# como transformar um .s num .o ; $< -- nome do ficheiro
.s.o:
	gcc -Wall -g -c $<	

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

#	valgrind ./${EXEC} (verifica se a memoria esta vazia)

gitconfig:

	git config --global user.email 1171857@isep.ipp.pt
	git config --global user.name Joao Cunha
	git config --global push.default simple

testsconfig:
	export REPO=arqcp19202nbg01

clean:
	rm -f ${OBJFILES} ${EXEC}

git:
	git add -A
	git commit -m "$m"
	git pull
	git push

#debug	
debug: ${EXEC}
	ddd ${EXEC} &	
