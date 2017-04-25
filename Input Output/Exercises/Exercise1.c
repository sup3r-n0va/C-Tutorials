/*Write a C program that calculates the volume of a sphere.
*The formulae to calculate the volume of sphere
* V = 4/3 * (pi *(r)^3)
*Expected Output :
*Input the radius of the sphere : 2.56
*The volume of sphere is 70.276237.
*/

#include <stdio.h>
#include <stdlib.h>

//pi 
#define PI 3.14159265359

//4 / 3 
#define FOUROVERTHREE 1.3333333333

char UserInput[254];

/* Calculation to cube of 
* radius
*/
double CubeOfRadius(float radius)
{


	return radius * radius * radius;


}

/*Calculate the Volume
* of the Sphere
*/
double VolumeOfSphere(float r)
{

	
	if(fgets(UserInput, sizeof(UserInput), stdin)) {
		if(1 == sscanf(UserInput, "%f", &r)) {
		}
	}
	
	printf("Input the radius of the sphere : %.2f\n", r);

	float radius = CubeOfRadius(r);

	return FOUROVERTHREE * (PI * radius);	

}


//main
int main(int argc, char **argv[])
{



	float r;
	
	
	double Volume_Sphere = VolumeOfSphere(r);
	
	printf("The volume of the sphere is %.6f.\n ", Volume_Sphere);

	return 0;
}
