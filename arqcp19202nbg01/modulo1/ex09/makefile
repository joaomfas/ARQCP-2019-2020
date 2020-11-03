# exemplo de makefile com variaveis
# variaveis
INCLUDES = sort_without_reps.h
SOURCES = main.c sort_without_reps.c
OBJFILES =  main.o sort_without_reps.o
EXEC = 09

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

clean:
	rm -f ${OBJFILES} ${EXEC}
repo:
	export REPO=arqcp19202nbg01

#debug	
debug: ${EXEC}
	ddd ${EXEC} &	
