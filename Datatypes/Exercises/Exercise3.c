/*Write a C program to compute the perimeter 
*and area of a rectangle with a height of 7 inches. and width of 5 inches.
*Expected Output :
*Perimeter of the rectangle = 24 inches
*Area of the rectangle = 35 square inches
*/

#include <stdio.h>

/* Function to Calculate the Area
*/
int Area(int Height, int Width)
{

	//height and width 
	Height = 7;	//7 inches
	Width = 5;	//5 inches

	//calculate the area

	return Height * Width;
}


/* Function to Calculate Perimeter
*/
int Perimeter(int Height, int Width)
{

	//height and width
	Height = 7;	//7 inches
	Width  = 5;	//5 inches

	//calculate the perimeter

	return (Height + Width) * 2;

}


// main function
int  main()
{
	//height and width in inches
	int Height;
	int Width;

	//call the area function
	int area = Area(Height, Width);

	//call the perimeter function
	int perimeter = Perimeter(Height, Width);


	//display the perimeter to the screen
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	//display area of rectangle to the screen
	printf("Area of the rectangle = %d square inches\n", area);

	return 0;

}
