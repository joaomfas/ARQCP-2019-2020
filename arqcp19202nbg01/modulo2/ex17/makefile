# Makefile
# Variables
INCLUDES = calculator.h
SOURCES = division.s modulus.s multiplication.s power2.s power3.s subtraction.s sum.s main.c
OBJFILES = division.o modulus.o multiplication.o power2.o power3.o subtraction.o sum.o main.o
EXEC = ex17

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

git:
	git add -A
	git commit -m "$m"
	git pull
	git push
	
#debug	
debug: ${EXEC}
	ddd ${EXEC} &	
