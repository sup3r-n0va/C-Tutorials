/* Write a C program to find whether a given year is a leap year or not.
*Test Data : 2016
*Expected Output :
*2016 is a leap year.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


char UserInput[254];
/* Check if the given year is a
* leap year
*/
int LeapYear(int a)
{


	if(a % 4 == 0)
		return true;
	else 
		return false;
}

int main(int argc, char **argv[])
{


	int a;

	fgets(UserInput, sizeof(UserInput), stdin);
        sscanf(UserInput, "%d\n", &a);

	
	if(LeapYear(a) == true)
		printf("%d is a leap year\n", a);
	else
		printf("%d is not a leap year\n", a);

	return 0;
}
