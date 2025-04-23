#include "Point.h"

namespace ost
{
	void Point::Write(std::ostream& ostream)
	{
		ostream << x << " : " << y << std::endl;
	}

	void Point::Add(Point& point)
	{
		x += point.x;
		y += point.y;
	}

	//operator overloads inside a class just requires the right-hand side
	//of the symbol as parameter
	//LHS is the instance that we are in right now
	Point& Point::operator+(Point& point)
	{
		Point p;
		p.x = x + point.x;
		p.y = y + point.y;

		return p;
	}

	Point Point::operator *(float s)
	{
		return Point(x * s, y * s);
	}

}

