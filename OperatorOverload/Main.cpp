#include <iostream>
#include "Point.h"

using namespace ost;
using namespace std;

//operator overloads outside a class requires the left-hand & right-hand sides
//of the symbol as parameters
//Point& operator + (Point& p1, Point& p2)
//{
//	Point point;
//	point.x = p1.x + p2.x;
//	point.y = p1.y + p2.y;
//	return point;
//}

int main()
{
	Point point1(10,14);
	point1.Write(cout);

	Point point2(5, 8);

	//point1.Add(point2); --- instead of a method call
	Point point3 = (point1 + point2) * 3.0f;	// syntactical sugar, gives operators user-defined meaning

	point3.Write(cout);



}