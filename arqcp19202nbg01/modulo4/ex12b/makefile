# exemplo de makefile com variaveis
# variaveis
INCLUDES = activate_bit.h 
SOURCES = main.c activate_bit.s 
OBJFILES = main.o activate_bit.o
EXEC = 12b

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
