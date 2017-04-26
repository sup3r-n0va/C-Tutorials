/*Write a program in C that takes minutes as input, 
*and display the total number of hours and minutes.
*Expected Output :
*Input minutes: 546
*9 Hours, 6 Minutes
*/

#include <stdio.h>
#include <stdlib.h>

char UserInput[254];

/*Display   
* Minutes 
*/
int Minutes(void)
{

	int Minutes;
	//Get input from user for Minutes
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d", &Minutes);

	//display minutes
	printf("Input minutes: %d\n", Minutes);

	return Minutes;
}

/*Now convert the minutes to
* Hours
*/
int ConvertToHours(int minutes_inputed)
{
	//Convert minutes into floating point

	//Now divide the minutes by hours
	//to get number of hours in minutes
	return minutes_inputed / 60;

}

/*Now find the remaining 
* minutes
*
*/
int ConvertToMinutes(int minutes_inputed)
{


	//Now get the remaining minutes in the 
	//hour
	return minutes_inputed % 60;
}

//main
int main(int argc, char **argv[])
{

	//Minutes input from the user
	int m = Minutes();
	

	//Number of Hours converted
	int hours = ConvertToHours(m);

	//Number of Minutes Converted
	int minutes = ConvertToMinutes(m);

	//display the minutes and hours
	printf("%d Hours, %d Minutes\n", hours, minutes);

	return 0;
}
