#include "point.h" 
#include <iostream>
//experiment 1
int main()
{
	float x, y;
	std::cout << "Enter X and Y coordinates: ";
	std::cin >> x >> y;

	Point point1;
	point1.SetX(x);
	point1.SetY(y);

	Point point2;
	point2.SetX(1.0);
	point2.SetY(2.0);

	std::cout << "Distance between point1 and point2:" << point1.Distance(point2) << std::endl;

	return 0;
}

