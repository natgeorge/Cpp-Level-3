#include <iostream>
#include "Point.h";

int main()
{
	//intake x and y variables
	double x, y;
	
	//takes in two variables that are seperated by a space
	std::cout << "Enter X and Y coordinates: ";
	std::cin >> x >> y;

	//default constructor for new object
	Point point1;
	
	//set the private members of the object point1 with user input values
	point1.SetX(x);
	point1.SetY(y);

	//print functions 
	std::cout << "Description:" << point1.ToString() << std::endl;
	std::cout << "X coordinate = " << point1.GetX() << std::endl;
	std::cout << "Y coordinate = " << point1.GetY() << std::endl;

	return 0;
}