/*Write a C program to find the eligibility of admission 
*for a professional course based on the following criteria:
*Marks in Maths >=65
*Marks in Phy >=55
*Marks in Chem>=50
*Total in all three subject >=180
*or
*Total in Math and Subjects >=140
*
*Test Data :
*Input the marks obtained in Physics :65
*Input the marks obtained in Chemistry :51
*Input the marks obtained in Mathematics :72
*Expected Output :
*The candidate is eligible for admission.
*/

#include <stdio.h>
#include <stdlib.h>


char UserInput[254];

void AdmissionGrade(int Maths, int Phy, int Chem)
{

	if(Maths + Phy + Chem >= 180){
		printf("The candidate is eligible for admission\n");
	} else if((Maths >= 65) && (Phy + Chem >= 75)) {
			printf("The candidate is eligible for admission\n");
	} else {
		printf("The candidate is not eligible for admission\n");
	}

	return;
}
int main(int argc, char **argv[])
{

	int Maths;
	int Phy;
	int Chem;

	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &Maths);
	
	fgets(UserInput, sizeof(UserInput), stdin);
	sscanf(UserInput, "%d\n", &Phy);

	fgets(UserInput, sizeof(UserInput), stdin);
        sscanf(UserInput, "%d\n", &Chem);

	AdmissionGrade(Maths, Phy, Chem);

	return 0;
}
