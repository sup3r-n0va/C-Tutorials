/*Write a program in C to calculate 
*the sum of three numbers 
*with getting input in one line separated by a comma
*Expected Output :
*Input three numbers separated by comma : 5,10,15
*The sum of three numbers : 30
*/

#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

/* Add the numbers
* to get the total
*/
int Total(int a, int b, int c)
{



	return a + b + c;
}

int main(int argc, char **argv[])
{


	int FirstNum;
	int SecondNum;
	int ThirdNum;


	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &FirstNum);
	
	fgets(UserInput, sizeof(UserInput) , stdin);
	sscanf(UserInput, "%d\n", &SecondNum);

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &ThirdNum);

	printf("Input three numbers separated by comma : %d,%d,%d\n", FirstNum, SecondNum, ThirdNum);

	
	int TotalNums = Total(FirstNum, SecondNum, ThirdNum);
	
	printf("The sum of three numbers is: %d\n", TotalNums);
	
	return 0;
}

