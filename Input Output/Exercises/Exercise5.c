/* Write a C program to find 
*the third angle of a triangle 
*if two angles are given.
*Expected Output :
*Input two angles of triangle separated by comma : 50,70
*Third angle of the triangle : 60
*/

#include <stdio.h>
#include <stdlib.h>


// Triangles add up to 180
#define TRIANGLE 180

/*Calculate the missing angle 
* In the triangle
*/
char UserInput[254];



int MissingAngle(int AngleOne, int AngleTwo)
{

	return TRIANGLE - (AngleOne + AngleTwo);

}

int main(int argc, char *argv[])
{

	int FirstAngle;
	int SecondAngle;

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &FirstAngle);

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &SecondAngle);
	
	printf("Input two angles of triangle separated by comma : %d,%d\n", FirstAngle, SecondAngle);

	int LastAngle = MissingAngle(FirstAngle, SecondAngle);

	
	printf("Third angle of the triangle : %d\n", LastAngle);
	

	return 0;
}

