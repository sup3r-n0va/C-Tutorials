#include <stdio.h>

char UserInput[254];

int main()
{


	//Calculate the maximum value based on bits 
	int NumberHowBig = 0;
	
	printf("How many Bits?");

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &NumberHowBig);

	printf("\n\n");

	// 0 : Print what was given 
	// 1 : Print what was given
	// 2 : 1 + 2 = 3 (Binary : 11)
	// 3 : 3 + 4 = 7 (Binary: 111)
	// 4 : 7 + 8 = 15 (Binary : 1111)


	int MyIncrementor = 1;
	int MyMultiplier = 1;
	int FinalValue = 1;

	//while loop will keep executing statement following it
	//only if the statement in the while loop is true

	while(MyIncrementor < NumberHowBig){
	
		MyMultiplier *= 2;
		FinalValue += MyMultiplier;
		//then increment it
		MyIncrementor++;
	
	}

	//handle if user enters 1 or 0
	if((NumberHowBig == 0) ||(NumberHowBig == 1))
		printf("Top Value : %d\n\n", NumberHowBig);
	else
		printf("Top Value : %d\n\n", FinalValue);
	 	

	printf("\n\n");

	//Get the user to Keep guessing a number between 0 and 10
	int SecretNumber = 10;
	int NumberGuessed = 0;

	//infinite loop
	while(1){ 

		printf("Guess My Secret Number: ");
		fgets(UserInput, sizeof(UserInput), stdin);
		sscanf(UserInput, "%d\n", &NumberGuessed);

		if(NumberGuessed == SecretNumber){
			printf("You Got It!\n");
			//break statement is used to exit out of 
			//a loop
			break;
		}
	}

	printf("\n\n");

	//You use a Do While Loop when you need something done 
	// at least once, but don't know the number of times you may need
	// to loop
	
	//Ask the user for the size of a shirt
	char SizeOfShirt; 
	
	do{

		printf("What Size of Shirt (S, M, L):\n ");
		fgets(UserInput, sizeof(UserInput), stdin);
		sscanf(UserInput, "%c\n", &SizeOfShirt);


	} while(SizeOfShirt != 'S' && SizeOfShirt != 'M' && SizeOfShirt != 'L');
	
	printf("\n\n");

	//You are going to use a for loop when you know 
	//before hand, how mnay times you want loop
	//through something
	
	//For loop that counts to 20
	for(int counter = 0; counter <= 20; counter++){
		//continue is used to skip this iteration of the loop
		// and instead continue with the next loop cycle
		
		//Skip even numbers
		if((counter % 2) == 0);
		continue;
	
		printf("%d\n", counter);
	}

	return 0;
}

