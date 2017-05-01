/*Write a C program to find the largest of three numbers.
*Test Data : 12 25 52
*Expected Output :
*1st Number = 12,        2nd Number = 25,        3rd Number = 52
*The 3rd Number is the greatest among three
*/

#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

int GreatestNum(int FirstNum, int SecondNum, int ThirdNum)
{

	if((FirstNum < SecondNum) || (FirstNum < ThirdNum))
		if(ThirdNum > SecondNum)
			return ThirdNum;
		else
			return SecondNum;
	else 
		return FirstNum;
	

}
int main(int argc, char **argv[])
{

	int FirstNum;
	int SecondNum;
	int ThirdNum;

	
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &FirstNum);

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &SecondNum);

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &ThirdNum);

	printf("1st Number = %d,  2nd Number = %d,  3rd Number = %d\n", FirstNum, SecondNum, ThirdNum);

	int Num = GreatestNum(FirstNum, SecondNum, ThirdNum);

	if(Num == FirstNum){
		printf("The 1st Number is the greatest among three\n");
	} else if(Num == SecondNum){
		printf("The 2nd Number is the greatest among three\n");
	} else {
		printf("The 3rd Number is the greatest among three\n");
	}

	return 0;
}	
