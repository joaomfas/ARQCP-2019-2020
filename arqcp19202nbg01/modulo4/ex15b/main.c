#include <stdio.h>
#include "greater_date.h"

	unsigned int build_date(int year, int month, int day){
		return (month << 24) | (year << 8) | day;
	}


  int main(void) {

	unsigned int date1 = build_date(2013,1,1);
	unsigned int date2 = build_date(12,12,31);
	
	unsigned int date = greater_date(date1, date2);
	
	printf("Greater date = %d\n", date);
     
	return 0; 
}
