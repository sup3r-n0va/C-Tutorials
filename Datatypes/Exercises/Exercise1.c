//Write a C program to print your name, date of birth, and  mobile number
/* In this format
*
*Name   : Alexandra Abramov  
*DOB    : July 14, 1975  
*Mobile : 99-9999999999

*/
#include <stdio.h>


int main()
{

	//Variable to hold the name 
	char MyName[] = "Alexandra Abramov";

	//variables to hold the DOB
	char Month[] = "July";
	int Day;
	int Year;

	Day = 14;
	Year = 1975;
	
	//Variable to hold Mobile
	char Mobile[] = "99-9999999999";

	
	//Display the Name
	printf("Name	: %s\n", MyName);

	//Display the DOB
	printf("DOB	: %s %d, %d\n", Month, Day, Year);

	//Display Mobile Number
	printf("Mobile	: %s\n", Mobile);


	return 0;
 
}
