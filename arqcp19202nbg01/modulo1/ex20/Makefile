# Makefile
# Variables
INCLUDES = find_all_words.h find_word.h
SOURCES = find_all_words.c find_word.c main.c
OBJFILES = find_all_words.o find_word.o main.o
EXEC = ex20

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