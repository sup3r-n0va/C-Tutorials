/*Write a program in C to read 10 numbers from keyboard and find their sum and average.
*Test Data :
*Input the 10 numbers :
*Number-1 :2
*...
*Number-10 :2
*Expected Output :
*The sum of 10 no is : 51
*The Average is : 5.100000
*/

#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

/* Total sum
* From input numbers
*/
int Sum()
{
	//Hold total value
	int Sum = 0;
	int Numbers;

	for(int counter = 1; counter <= 10; counter++){
		//Now 10 numbers from the user
		fgets(UserInput, sizeof(UserInput), stdin);
		sscanf(UserInput, "%d\n", &Numbers);
	
		//Now get total from the numbers
		Sum += Numbers;
	}
		//return sum
		return Sum;
}

/* Get the average of the sum */
float Avg(int sum)
{
	

	//now return the average
	
	return (float) sum / 10.0;
}

int main(int argc, char **argv[])
{

	int Total;
	float Average;

	Total = Sum();
	Average = Avg(Total);

	//Display Average and Sum
	printf("The sum of 10 no is : %d\n", Total);
	printf("The Average is : %f\n", Average);

	return 0;
}

	
	

