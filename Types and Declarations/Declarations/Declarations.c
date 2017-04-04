//declarations

#include <stdio.h>

int main()
{
	//declarations have a type a name and a initializer
	int hens = 5;
	//uninitalized variables can lead to various exploits
	int eggs = 6;

	printf("%d and %d\n", hens, eggs);

	return 0;


}



