#include <stdio.h>

int main()
{

	int count = 10;
	
	//dowhileloop will always execute once before the condition of the 
	//while loop is executed	
	do {
		printf("Count: %d\n", count);
		count += 1;
	}while (count < 10);



	return 0;
}
