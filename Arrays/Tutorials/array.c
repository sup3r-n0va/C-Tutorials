#include <stdio.h>
#include <stdlib.h>	//needed for exit()
#include <string.h>

int main()
{

	printf("\n");

	//ARRAYS --------
	
	//We have already taken a look at arrays when we stored
	//strings in a character array,
	//An int array is the same type of thing , and array
	//that stores in,
	//An array can only store elements of the same data type


	char WholeName[9] = "Sup3rn0va";
	
	//You can also define an array one element at a time

	int PrimeNums[3] = {2, 3, 5};

	//You don't need to define the size if you define
	//the values up front.
	int MorePrimes[] = {13, 17, 19, 23};

	//Like most other langauges the first number in an array is put in the zero index

	printf("The first prime in the list is %d\n\n", PrimeNums[0]);

	//No quotes and an automatic null at the end
	char ThirdCity[6] = "Paris";

	//Display the third city
        printf("The third city is : %s\n", ThirdCity[6]);

	/* Once an array is defined we can change the value with strcpy() but make sure if you do that
	* new array is of the same size, or less, Otherwise you will overwrite other data in memory.
	* You have to make your arrays big enough to hold all potential input, but don't over do it, or
	* you'll consume to much memory.
	*/
	char YourCity[100];

	printf("What city do you live in? ");

	/* scanf() is kind of limited for adding a string to an array
	* 1. It will allow you to overwrite data past the end of the space 
	* allowed
	* 2. It won't allow you to enter spaces unless you define exactly how they
	* will be entered
	* fgets() has neither of these problems and it also adds a \0 (null byte) at the
	* end for you. The only negative is that you must 
	* provide a size limit for the data being entered
	*/
	fgets(YourCity, 30, stdin);

	printf("Hello %s\n\n", YourCity);
	
	//fgets() will read in everything up till the end of the array
	// is reached or until a \n is entered and then it will add
	// a \0 at the end. It leaves in the \n though which can be a bad thing

	// Let's get rid of the '\n'
	// Use -std=c99 since we are initializing i below in for

	for(int i = 0; i < 30; i++){
		
		if(YourCity[i] =='\n'){
			YourCity[i] == '\0';
			break;
		}
	}

	printf("Hello %s\n\n", YourCity);

	/* Some string functions available
	* strcmp() takes 2 srtings and returns a negative number
	* if the first string is less then than the second. It returns
	* a positive if the opposite occurs. It returns a 0 if they are equal
	*/

	printf("Is your city Paris? %d\n\n", strcmp(YourCity, ThirdCity));

	// strcat() adds the second string to the end of the first

	char YourState[] = ", Pennsylvania";
	
	strcat(YourCity, YourState);

	printf("You live in %s\n\n", YourCity);

	// strlen() returns the length of the string minus \0

	printf("Letters in Paris : %d\n\n", strlen(ThirdCity));

	/* As mentioned before strcpy() is bad for copying strings
	* because it can overwite memory.
	* That is were strlcpy() comes in.
	* It won't overwrite memory and it always adds a \0
	*/

	strlcpy(YourCity, "El Pueblo del la Reina de Los Angeles",sizeof(YourCity));

	printf("The new name is %s\n\n", YourCity);


	return 0;
}
