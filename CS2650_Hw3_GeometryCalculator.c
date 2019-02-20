/*
 ============================================================================
 Name        : CS2650_Hw3_GeometryCalculator.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

# include <math.h>
# include <stdio.h>
# include <windows.h>

# define TRUE 1
# define FALSE 0
# define PIE 3.14159

int checkInput (double, double);
void CalculateAreaOfCircle ();
void CalculateAreaOfRectangle ();
void CalculateAreaOfTriangle ();

int main ()
{
	int userChoice;

    printf ("What do you wish to calculate:\n");
    printf ("1 for Area of a circle.\n 2 for Area of a rectangle.\n 3 for Area of a triangle.\n 4 to Quit.\n");
    fflush(stdout);
    scanf ("%d", &userChoice);
    if (userChoice < 1 || userChoice > 4)
    {
    	printf ("Wrong number choose 1-4 only \n");
    }
    else if(userChoice == 1)
    {
    	CalculateAreaOfCircle ();
    }
    else if(userChoice == 2)
    {
    	 CalculateAreaOfRectangle ();
    }
    else if(userChoice ==3)
    {
    	CalculateAreaOfTriangle ();
    }
    else if(userChoice ==4)
    {
    	exit(0);
    }
    else{
    	printf("error invalid value");
    }
return 0;
}

void CalculateAreaOfCircle ()
{

    double circleRadius = 0;

    printf ("Enter radius: \n");
    fflush(stdout);
    scanf ("%lf", &circleRadius);
    if (checkInput (circleRadius, 0))
    {
        printf ("The area of circle is: %f\n\n", PIE*(circleRadius*circleRadius));
    }
    else
    {
        printf ("Incorrect Information\n");
        CalculateAreaOfCircle ();
    }
    main();
}

void CalculateAreaOfRectangle ()
{
    double rectangle_length = 0;
    double rectangle_width = 0;

    printf ("Enter length first then width\n");
    fflush(stdout);
    scanf ("%lf\n", &rectangle_length);
    fflush(stdout);
    scanf ("%lf", &rectangle_width);
    if (checkInput (rectangle_length, rectangle_width))
    {
        printf ("The area of rectangle is: %f\n\n", rectangle_length*rectangle_width);
    }
    else
    {
        printf ("Incorrect Information\n");
        CalculateAreaOfRectangle ();
    }
    main();
}

void CalculateAreaOfTriangle ()
{
    double base = 0;
    double height = 0;

    printf ("Enter the triangle base then height \n");
    fflush(stdout);
    scanf ("%lf\n", &base);
    fflush(stdout);
    scanf ("%lf", &height);
    if (checkInput (base, height))
    {
        printf ("The area of triangle is: %f\n\n", ((0.5*base)*height));
    }
    else
    {
        printf ("Incorrect Information\n");
        CalculateAreaOfTriangle ();
    }
    main();
}

int checkInput (double first_parameter, double second_parameter)
{
        return (first_parameter >= 0 && second_parameter >= 0)? TRUE : FALSE;
}
