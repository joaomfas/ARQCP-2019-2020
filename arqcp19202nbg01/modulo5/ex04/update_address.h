#ifndef UPDATE_ADDRESS_H
#define UPDATE_ADDRESS_H

typedef struct {
       char age;
       short number;
       int grades[10];
       char name[80];
       char address[120];
} Student;


void update_address(Student*, char*);
#endif
