/*Write a C program to check 
*whether a given number is even or odd.
*Test Data : 15
*Expected Output :
*15 is an odd integer
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char UserInput[254];


/* Function checking
* whether input given is 
* odd or even
*/
int OddOrEven(int a)
{
	
	//check to see if number is odd or even
	if((a % 2 == 0))
		return true;
  	else 
		return false;


}

int main(int argc, char **argv[])
{
	int a;

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &a);
	
	if(OddOrEven(a) == true) 
		printf("%d is even integer\n", a);
	else
		printf("%d is odd integer\n", a);

	return 0;
}

	
