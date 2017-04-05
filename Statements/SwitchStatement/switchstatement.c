#include <stdio.h>

int main()
{

	//switch statement is usually used when your trying to 
	//check for a condition on one variable
	int eggs = 1;

	switch(eggs) {
		case 0:
			printf("No cake!\n");
			//remember to place the 
			//break statement or the condition
			//will fall through and execute all the 
			//statements
			break;
		case 1:
			printf("Cupcake!\n");
			break;
		default:
			printf("Cake!\n");

	}

	return 0;
}
