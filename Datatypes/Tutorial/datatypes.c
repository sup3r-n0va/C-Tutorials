/* Multiline 
Comment */


//Single Line Comment

#include <stdio.h> 	//used for printf and scanf
#include <string.h>	//used for strings in c

#define MYNAME "Sup3rn0va"	//every time MYNAME is used sup3rn0va will	
				//replace it

int GlobalVar = 100;		//this will be accessible in every function
				//in main
//int main is where execution takes place in a program
int main(){
	
	//this is character variable
	//variable are just a box in memory where data is stored
	char FirstLetter = 'S';		//CHAR IS one byte

	int Age = 23;			//ints are 4 bytes and hold any
					//number except decimal numbers

	float  PiValue = 3.14159;	//float hold any decimal number
					//but aren't really that accurate

	double ReallyBigPi = 3.141591411551515114;	//double hold
							//decimal values
							//that are more accurate
							//than floating points

	//to display something to the screen we use the printf 
	//function
	printf("\n");			//The /n is used for a newline
	
	printf("This will print to screen\n\n");	

	
	//format specifer are sued to print out the data type values to 
	// the screen

	//The %d is used to display a int variable
	printf("I am %d years old\n\n", Age);

	//To display a float and double you use %f
	//to display a float to 5 decimal places you use
	// .5f
	printf("Pi = %.5f\n\n", PiValue);
	
	printf("Big Pi = %.15f\n\n", ReallyBigPi);

	//character format specifier is %c
	printf("The first letter in my name is: %c\n\n", FirstLetter);

	//string format specifier is %s
	printf("My Name is %s\n\n", MYNAME);

	//to create a string in c you'd have to
	// create a character array
	char MyName[] = "Sup3rn0va";	//this holds a character array

	printf("My Name is %s\n\n", MyName);

	//You can find the maximum amount of bytes each data
	//type can hold
	printf("\n");

	printf("A char takes up %d bytes\n\n", sizeof(char));
	printf("A int takes up %d bytes\n\n", sizeof(int));
	printf("A long int takes up %d bytes\n\n", sizeof(long int));
	printf("A float takes up %d bytes\n\n", sizeof(float));
	printf("A double takes up %d bytes\n\n", sizeof(double));




	return 0;




}
