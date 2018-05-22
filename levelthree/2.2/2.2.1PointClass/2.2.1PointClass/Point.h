//ifndef = if POINT_H is not defined (in a search from the beginning of the file)

//define POINT_H

//POINT_H
#ifndef POINT_H
#define POINT_H 1

#include <string>

class Point

{

	//public members

public:

	//default constructor

	Point();

	//destructor

	~Point();

	//GetX/Y functions that return doubles

	double GetX();

	double GetY();

	//SetX/Y functions that takes in doubles and changes the private state

	void SetX(double);

	void SetY(double);

	//returns string descriptor of current state of objects

	std::string ToString();



private:

	//declares private variables for objects

	double m_x;

	double m_y;

};

#endif 