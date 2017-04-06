#include <stdio.h>

int main()
{
	//loops are important if you would like to repeat something 
	//over and over again
	int count = 0;
	
	//in a while loop the condition is evaluated before the statement 
	//is executed

	while(count < 10){
		printf("count %d\n", count);
		count += 1;
	}



	return 0;
}
