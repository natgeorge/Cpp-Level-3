#include <iostream>
#include "point.h";

int main()
{
	float x, y;
	std::cout << "Enter X and Y coordinates: ";
	std::cin >> x >> y;

	Point point1;
	point1.SetX(x);
	point1.SetY(y);
	std::cout << "Description:" << point1.ToString() << std::endl;
	std::cout << "X coordinate = " << point1.GetX() << std::endl;
	std::cout << "Y coordinate = " << point1.GetY() << std::endl;

	Point point2;
	point2.SetX(1.0);
	point2.SetY(2.0);
	std::cout << "Description Point 2:" << point2.ToString() << std::endl;

	std::cout << "Distance of point1 from origin: " << point1.DistanceOrigin() << std::endl;
	std::cout << "Distance between point1 and point2:" << point1.Distance(point2) << std::endl;

	return 0;
}