/*Write a program in C to display the n terms of odd natural number and their sum . 
*Test Data
*Input number of terms : 10
*Expected Output :
*The odd numbers are :1 3 5 7 9 11 13 15 17 19
*The Sum of odd Natural Number upto 10 terms : 100
*/

#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

int OddNumSum(int Num)
{

	int sum = 0;
	int counter;
	
	printf("\nThe odd numbers are : ");
	for(counter = 1;  counter <= Num * 2; counter++){
		if((counter % 2) != 0){
			sum = sum + counter;
			printf("%d", counter);
			printf(" ");
		}
	}

	return sum;

}

int main(int argc , char **argv[])
{

	int Num;
	

	printf("\nInput number of terms : ");
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d", &Num);

	int Total = OddNumSum(Num);
	
	printf("\nThe Sum of odd Natural Number upto %d terms : %d\n", Num, Total);

	return 0;
}
