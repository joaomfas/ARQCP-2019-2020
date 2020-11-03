# Makefile
# Variables
INCLUDES = upper1.h
SOURCES = upper1.c main.c
OBJFILES = upper1.o main.o
EXEC = ex04

# Suffix rules
.SUFFIXES : .c .o
.SUFFIXES : .s .o

# Transform .c into .o
.c.o:
	gcc -Wall -g -c $<

# Transform .s into .o
.s.o:
	gcc -Wall -g -c $<	
	
${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}
	
${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

#	valgrind ./${EXEC}
	
clean:
	rm -f ${OBJFILES} ${EXEC}

#Git configurations
gitconfig:
	git config --global user.email 1181436@isep.ipp.pt 
	git config --global user.name Joao Ferreira
	git config --global push.default simple
	
#debug	
debug: ${EXEC}
	ddd ${EXEC} &	