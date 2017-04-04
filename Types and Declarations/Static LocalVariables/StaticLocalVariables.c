#include <stdio.h>

void run()
{

	//static local variables remain the same throughout the
	//lifetime of the program
	//the compiler will also default the static variable 
	//to 0 if not initialized
	static int hens; //uninitalize static local variable
	int eggs = 4;

	//should add one to both 
	//variables
	hens += 1;
	eggs += 1;

	//display the variables
	printf("%d %d\n", hens, eggs);

	return;

}

//intialize garbage data on the stack
void trample()
{

	int a = 123;
	int b = 123;

}

int main()
{
	//They come into existence and their
	//storage is provided when the
	//function is called.
	//They also cease to exist when 
	//the function is returned
	//they are only visible within the
	//direct funciton
	
	//call the function three times
	trample();
	trample();
	trample();
	run();
	run();
	run();


	return 0;
}

