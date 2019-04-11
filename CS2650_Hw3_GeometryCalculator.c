/****************************************************************************
 @Name CS2650_Hw3_GeometryCalculator.c
 @Author Robert Delfin
 ****************************************************************************
 */

 /**
 *  Header files
 */
# include <math.h>
# include <stdio.h>
# include <windows.h>

 /**
  * \def True is if the value is a valid value.
  * \def False if the value is a false value
  * \def The constant value of PIE.
 */
# define TRUE 1
# define FALSE 0
# define PIE 3.14159

 /**
  * @brief This is prototype function of CheckInput which is a method which checks the inputed values from the users
  * @param double
  * @param double expects two double values
 */
int checkInput (double, double);

/**
  * @brief prototype function of CalculateAreaOfCircle which is void returning no values gets the Area of a Cirle
*/
void CalculateAreaOfCircle ();

/**
  * @brief prototype function of CalculateAreaOfRectangle which is void returning no values gets the Area of a Rectanlge
  */
void CalculateAreaOfRectangle ();
/**
  * @brief prototype function of CalculateAreaOfTriangle which is void returning no values gets the Area of a Triangle
*/
void CalculateAreaOfTriangle ();

/**
  * @brief main() is the main method which gets user input to choose which area formula the user wants to select.
           Chooses three from three different area formulas. Area of a circle, rectangle, and triangle. Otherwise the user exits.
*/
int main ()
{
	/**
	* \var userChoice the variable holds the choice the user selects in the form of an integer.
	*/
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

/**
  * @brief CalculateAreaOfCirlce prompts the user to enter values for the area formula. Makes the user get correct values if the user enters invalid numbers
*/
void CalculateAreaOfCircle ()
{

	/**
	* \var circleRadius holds the radius of the cirlce
	*/
    double circleRadius = 0;

    printf ("Enter radius: \n");
    fflush(stdout);
    scanf ("%lf", &circleRadius);

	/**
	* calls function checkInput and uses an if else statement to check if the inputs were valid or not.
	*/
    if (checkInput (circleRadius, 0))
    {
        printf ("The area of circle is: %f\n\n", PIE*(circleRadius*circleRadius));
    }
    else
    {
        printf ("Incorrect Information\n");
        CalculateAreaOfCircle ();
    }
	/**
	* \fn main is called to recall the main function to enter the area again.
	*/
    main();
}

/**
  *@brief CalculateAreaOfRectangle prompts the user to enter values for the area formula. Makes the user get correct values if the user enters invalid numbers
*/
void CalculateAreaOfRectangle ()
{
	/**
	*\var rectangle_length holds the length of the rectangle
	*\var rectangle_width holds the width of the rectangle
	*/
    double rectangle_length = 0;
    double rectangle_width = 0;

    printf ("Enter length first then width\n");
    fflush(stdout);
    scanf ("%lf\n", &rectangle_length);
    fflush(stdout);
    scanf ("%lf", &rectangle_width);
	/**
	* calls function checkInput and uses an if else statement to check if the inputs were valid or not.
	*/
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

/**
  Commenting something...
*/
void CalculateAreaOfTriangle ()
{
	/**
	*\var base holds the base of the triangle
	*\var heights holds the height of the triangle
	*/
    double base = 0;
    double height = 0;

    printf ("Enter the triangle base then height \n");
    fflush(stdout);
    scanf ("%lf\n", &base);
    fflush(stdout);
    scanf ("%lf", &height);
	/**
	* calls function checkInput and uses an if else statement to check if the inputs were valid or not.
	*/
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

/**
 *@brief checkInput checks if the values from the area formula are not negative.
 *@param first_parameter is the first value sent to checkInput
 *@param second_parameter is the second value sent to checkInput
 *@return 1 or 0/ true or false if the parameters are negative and sends them to the formula functions.
*/
int checkInput (double first_parameter, double second_parameter)
{
        return (first_parameter >= 0 && second_parameter >= 0)? TRUE : FALSE;
}
