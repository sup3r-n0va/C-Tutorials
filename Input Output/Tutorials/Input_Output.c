#include <stdio.h>

#define MYNAME "Sup3rn0va"

int GlobalVar = 100;

int main()
{

	char MiddleInitial;

	//ask question before input
	//so we are going to use printf
	printf("What is your middle initial?\n");

	//now get input from the user using scanf
	//get a character from the user
	scanf("%c", &MiddleInitial);
	
	//now display the middle initial to the screen
	printf("Middle initial %c ", MiddleInitial);

	printf("\n");

	//with scanf your only going to get one value at a time
	//So now i'm going to create a string array
	char FirstName[30];	//first name
	char LastName[30];	//last name

	//ask the user for their name
	printf("What is your name?\n");
	
	//get firstname and lastname from user
	scanf("%s %s", FirstName, LastName);

	//now display full name to the screen
	printf("Your name is %s %c %s\n\n", FirstName, MiddleInitial, LastName);

	//you can also add slashes into scanf
	int Month;
	int Day;
	int Year;

	//ask the user for the birthday
	printf("What is your birth date?\n");

	//get birthday from the user
	scanf(" %d/%d/%d", &Day, &Month, &Year);

	//display the birthday
	printf("Your birthday is: %d/%d/%d\n", Day, Month, Year);

	
	return 0;
}
