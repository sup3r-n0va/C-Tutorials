//local variables

#include <stdio.h>

void run()
{

	int hens; //uninitalize variable
	int eggs = 4;

	//should add one to both 
	//variables
	hens += 1;
	eggs += 1;

	//display the variables
	printf("%d %d\n", hens, eggs);

	return;

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
	run();
	run();
	run();


	return 0;
}
