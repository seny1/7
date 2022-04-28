#include "7.h"

double Circle::GetRadius()
{
	return radius;
}

void Circle::SetRadius(double valueRadius)
{
	radius = valueRadius;
}

string Circle::GetColor()
{
	return color;
}

void Circle::SetColor(string valueColor)
{
	color = valueColor;
}

double Circle::area(double rad)
{
	double area;
	area = 3.14 * rad * rad;
	return area;
}
double Circle::perimeter(double rad)
{
	double perimeter;
	perimeter = 2 * 3.14 * rad;
	return perimeter;
}

double Complex::GetX()
{
	return x;
}

void Complex::SetX(double valueX)
{
	x = valueX;
}

double Complex::GetY()
{
	return y;
}

void Complex::SetY(double valueY)
{
	y = valueY;
}

void Complex::Print(double x, double y)
{
	cout << x << " + i*" << y;
}

Complex Complex::Sum(Complex first, Complex second)
{
	Complex sum;
	sum.SetX(first.GetX() + second.GetX());
	sum.SetY(first.GetY() + second.GetY());

	return sum;
}

void Vector::SetCoordinateX(double x)
{
	coordinateX = x;
}

void Vector::SetCoordinateY(double y)
{
	coordinateY = y;
}

double Vector::GetCoordinateX()
{
	return coordinateX;
}

double Vector::GetCoordinateY()
{
	return coordinateY;
}

double Vector::lenght_of_vector(double x, double y)
{
	return sqrt(x * x + y * y);
}

void Vector::printCoordinates()
{
	cout << "(" << coordinateX << ", " << coordinateY << ") - coordinates of vector." << endl;
}

double Vector::scalarProduct(double x1, double x2, double y1, double y2)
{
	return x1 * x2 + y1 * y2;
}