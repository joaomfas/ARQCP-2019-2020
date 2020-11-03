#include <stdio.h>
#include "greater_date.h"

	//dia: 0 - 7
	//ano: 8 - 23
	//mes: 24 - 31

	int greater_date(unsigned int date1, unsigned int date2) {
	
		unsigned int day1 = date1 & 0xff;
		unsigned int day2 = date2 & 0xff;
		
		unsigned int aux1 = (unsigned) date1 >> 8;
		unsigned int aux2 = (unsigned) date2 >> 8;
		
		unsigned int year1 = aux1 & 0xffff;
		unsigned int year2 = aux2 & 0xffff;
		
		aux1 = (unsigned) date1 >> 24;
		aux2 = (unsigned) date2 >> 24;
		
		unsigned int month1 = aux1 & 0xff;
		unsigned int month2 = aux2 & 0xff;
		
		if(year1 > year2){
			return date1;
		}else if(year2 > year1){
			return date2;
		}
		
		if(month1 > month2){
			return date1;
		}else if(month2 > month1){
			return date2;
		}
		
		if(day1 > day2){
			return date1;
		}else if(day2 > day1){
			return date2;
		}
		
		return date1;
		
		return 0;
	}
