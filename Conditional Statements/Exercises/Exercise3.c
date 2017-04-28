/*Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0
*, 0 when m is 0 
*and -1 when m is less than 0
*Test Data : -5
*Expected Output :
*The value of n = -1
*/


#include <stdio.h>
#include <stdlib.h>

char UserInput[254];


int UserValue(int m)
{

	int n;

	
	if(m < 0){
		n = -1;
		printf("The value of n = %d\n", n);
		return n;
	} else if(m == 0){
		n = 0;
		printf("The value of n = %d\n", n);
		return n;
	} else {
		n = 1;
		printf("The value of n = %d\n", n );
		return n;

	}

}
int main(int argc, char **argv[])
{

	int m;
	
	//get user input
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &m);

	printf("Test Data : %d\n", m);
	
	//function to check m for value
	// of n 
	UserValue(m);

	return 0;
}
