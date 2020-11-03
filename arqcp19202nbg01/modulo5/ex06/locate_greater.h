#ifndef LOCATE_GREATER_H
#define LOCATE_GREATER_H

typedef struct {
       char age;
       short number;
       int grades[10];
       char name[80];
       char address[120];
} Student;


void locate_greater(Student*, int, int*);
#endif
