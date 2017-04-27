#include <stdio.h>

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

	int num = 1;
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
	
	char* LegalAge = (CustAge > 21) ? "true" : "false";

	printf("Is the customer of legal age? %s\n\n", LegalAge);

	printf("I bought %s products\n\n", 
		(NumOfProducts > 1) ? "many" : "one");



	return 0;
}
