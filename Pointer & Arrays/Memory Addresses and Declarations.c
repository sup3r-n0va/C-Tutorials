#include <stdio.h>

int main() 
{
	// integer variable containing the value 1234
	int i = 1234;
	//pointer containing  the value 0
	int * p = 0;

	//the address of i is stored in the pointer variable p
	p = &i;

	//dereference pointer is used for variable p so it can store 
	//value
	*p = 2345;

	//display the values of p, i ,j
	printf("p = %d i = %d\n", &p, i);

	return 0;

}
