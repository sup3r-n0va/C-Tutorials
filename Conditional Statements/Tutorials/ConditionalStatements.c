#include <stdio.h>
#include <stdlib.h>	//for exit(0)

char UserInput[254];

int main()
{

	//Relational operators are used
	//to compare two variables
	//These consist of
	// > (greater than)
	// < (less than)
	// >= (greater or equal to)
	// <= (less than or equal)
	// == (equal to)
	// != (not equal)
	// true = 1
	// false = 0

	printf("\n");

	int num1 = 1;
	int num2 = 2;

	printf("Is 1 > 2 : %d\n\n", num1 > num2);
	
	//In conditional statements the first true statement
	// will be executed and all the other statements
	//will be ignored
	//if statement is used when comparing values
	// and perform actions depending on the result
	if(num1 > num2){
		printf("%d is greater then %d\n\n", num1, num2);
	//else if is used
	//when you're trying to comapring multiple values
	} else if(num1 < num2){
		printf("%d is less than %d\n\n", num1, num2);
	//else is used as the default 
	// if no other statement has been
	// evaluated to true
	} else {
		printf("%d is equal %d\n\n", num1, num2);

	}
	//logical operators are used to combine multiple relational operators
	// The following are logical operators
	// && - (AND)	- BOTH CONDITIONS HAVE TO BE MET
	// || - (OR)	- ONLY ONE CONDITION HAS TO BE MET.
	// !  - (NOT) - THIS IS OPPOSITE


	//Missed less than 10 days work AND
	//Has over 30,000 OR
	//Signed up more then 30 new customers

	int BobMissedDays = 8;
	int BobTotalSales = 24000;
	int BobNewCust = 32;

	if(BobMissedDays < 10 && BobTotalSales > 30000
	   || BobNewCust > 30){
		printf("Bob gets a Raise\n\n");
	} else {
		printf("Bob doesn't get a raise");
	}

	//Conditional Operator is used as
	//short hand notation for if and else statement
	int CustAge = 38;
	int NumOfProducts = 23;
	
	char* LegalAge = (CustAge > 21) ? "true" : "false";

	printf("Is the customer of legal age? %s\n\n", LegalAge);

	printf("I bought %s products\n\n", 
		(NumOfProducts > 1) ? "many" : "one");

	int WhatToDo = 0;
	//DO WHILE will alway execute once
	do{
		printf("\n");
		printf("1. What Time is It?\n");
		printf("2. What is Todays Date?\n");
		printf("3. What Day it it?\n");
		printf("4.Quit\n");
	
		fgets(UserInput, sizeof(UserInput), stdin);
		sscanf(UserInput, "%d", &WhatToDo);
	} while(WhatToDo < 1 || WhatToDo > 4);

	//How To Handle input with switch
	//Switch checks the value provided and excutes 
	// accordingly. (Value must be char or int)
	// break is used to stop checking input against the
	// other options. Without break other options would be
	// checked

	switch(WhatToDo){
		case(1) :
			printf("Print the time\n");
			break;
		case(2) :
			printf("Print the date\n");
			break;
		case(3) :
			printf("Print the day\n");
			break;
		default :
			printf("Bye Bye\m");
			exit(0);
			break;
	}



	return 0;
}
