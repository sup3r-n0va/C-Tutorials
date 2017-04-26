/*  Write a C program that converts kilometers per hour to miles per hour.
*Expected Output :
*Input kilometers per hour: 15
*9.320568 miles per hour
*/

#include <stdio.h>
#include <stdlib.h>

//1 Kilometer Per hour = 0.62 Miles Per Hour
#define MPH 0.6213712

/* Calculation to convert
* Kmph --> Mph
*/

char UserInput[254];

double ConvertToMph(int kph)
{
	//Get kilometers per hour from the user
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d", &kph);	

	printf("Input kilometers per hour: %d\n", kph);

	return ((double) kph) * MPH;
}

//main
int main(int argc, char **argv[])
{

	int Kph;
	

	double Convert_Mph = ConvertToMph(Kph);

	//display the conversion to mph
	printf("%.6f miles per hour\n", Convert_Mph);

	return 0;
}
	
