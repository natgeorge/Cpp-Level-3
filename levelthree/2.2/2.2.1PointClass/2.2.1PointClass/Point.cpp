#include "Point.h"

#include <sstream>



//default constructor that creates an instance of the class as an object

//sets default to 0,0 instead of random values

//since default constructor does not take input values

Point::Point()

{

	m_x = m_y = 0.0;

}



//destructor

Point::~Point()

{

}



//GetX/Y function returns the value of the private member m_x/m_y

double Point::GetX()

{

	return m_x;

}



double Point::GetY()

{

	return m_y;

}



//SetX/Y funxtion sets a new value for the private member m_x/m_y

void Point::SetX(double x)

{

	this->m_x = x;

}



void Point::SetY(double y)

{

	this->m_y = y;

}


//using stringsteam to store a string to the variable ss, whose value can be returned
std::string Point::ToString()

{

	std::stringstream ss;

	ss << "Point(" << m_x << "," << m_y << ")"<< std::endl;

	return ss.str();

}