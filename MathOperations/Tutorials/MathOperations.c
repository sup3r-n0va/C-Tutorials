/* Math operations
*/

#include <stdio.h>

#define MYNAME "Sup3rn0va"

int GlobalVar = 100;

int main()
{

	//In c you can perform addition(+), subtraction(-), multiplication(*)
	//divison (/)
	//You can also perform modulus between two integers, but only two
	//integers (%)
	int Num1 = 12;
	int Num2 = 15;
	int NumAns;
	
	//Floating points
	float Decimal1 = 1.2;
	float Decimal2 = 1.5;
	float DecimalAns;
	int RandomNum = 1;

	printf("Integer Calculation %d\n", Num2 / Num1);


	printf("Float Calculation %f\n\n", Decimal2 / Decimal1);

	printf("Modulus %d\n\n", Num2 % Num1);

	//order of operation is crucial in C
	printf("Without Parentheses %d\n\n", 3 + 6 * 10);
	
	printf("With Parentheses %d\n\n", (3 + 6) * 10);

	//There are short hand notations for incrementing 
	//and decrementing a value
	//+= - this will add whatever value to the right to the left
//	printf("1 += 2 : %d\n\n", RandomNum += 2);
 
	printf("%d += 2: %d\n\n", RandomNum, RandomNum += 2);

	//Because the value on the right is displayed before the calculation
	//is performed 
	//You can perform different short hand notations
	//If you want the the calculation to be performed before
	//the variable on the right
	// You use the ++variable short hand notation
	//To do this
	
	int ExNum = 1;
	//Incrementing before the calucation
	printf("++%d : %d\n\n", ExNum, ++ExNum);

	//Increment After the calculation

	ExNum = 1;

	printf("%d++ : %d\n\n", ExNum, ExNum++);

	//A cast is just changing a data type to another
	int NumberEx = 12;
	int NumberEx2 = 6;

	printf("NumberEx / NumberEx2 = %f\n\n", (float) NumberEx / NumberEx2);


	return 0;
}

	
