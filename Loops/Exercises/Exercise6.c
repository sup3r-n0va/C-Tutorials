/*Write a program in C to display the multiplication table of a given integer.
*Test Data :
*Input the number (Table to be calculated) : 15
*Expected Output :
*15 X 1 = 15
*...
*...
*15 X 10 = 150
*/

#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

int TableToCalculate()
{
	
	int Num;
	int Ans;

	//get input from user for table to be calculated
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &Num);

	//loop through the times table 
	for(int counter = 1; counter <= 12; counter++){
		Ans = Num * counter;
		printf("%d X %d  = %d\n", Num , counter, Ans);
	}
	
	return 0;
}


int main(int argc , char **argv[])
{

	TableToCalculate();

	return 0;
}
