#include <stdio.h>

void run()
{
	//local variables are only alive when the function is called
	//and cannot be accessed by any other function in the program


	int hens = 5;
        int eggs = 6;

	hens += 1;
	eggs += 1;

	printf("%d %d\n", hens. eggs);


	return;
}


int main()
{

	run();
	run();
	run();
		



	return 0;

}
