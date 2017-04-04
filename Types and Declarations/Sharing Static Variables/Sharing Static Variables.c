//Sharing Static Variables

#include <stdio.h>

static int eggs;

void up()
{

	eggs += 10;

	return;

}

void down()
{

	eggs -= 5;

	return;

}

int main()
{

	//we will want to share data that will access 
	//different function that will need to act on
	//the same variable
	//we can do this by declaring a static variable at file scope	
	up();
	up();
	down();

	//this should display 15 as the answer
	printf("There are %d eggs\n", eggs);

	return 0;


}
