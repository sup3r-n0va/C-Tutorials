#include <stdio.h>

typedef unsigned char byte;


int main()
{

	//c only has a small selection of types
	//use fo a standard non-decimal type
	int i = 123;

	//used for decimal values
	float f = 1.23f;

	//used for more precised floating points
	double d = 2.34;

	//used for single characters and bytes
	char c = 'c';

	//there are different storages as well
	unsigned int ui = 123u;
	
	short int si = 123;
	
	long int li = 123;

	//there is a confusion to if char is unsigned or signed
	//so you used unsigned char when you want to represent bytes
	//and signed char when you want to represent a char
	//in this case we use a typedef defintion
	//this will be useful when using networking sockets etc
	byte b = 0x12;	

	//to determine these data type sizes we can use the sizeof operator
	printf("%d (%d)\n", i, (int) sizeof(int));

	return 0;


}
