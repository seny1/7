#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	double GetRadius();
	void SetRadius(double);
	string GetColor();
	void SetColor(string);
	double area(double);
	double perimeter(double);
	Circle()
	{
		radius = 10;
		color = "white";
	}
	Circle(double rad, string col)
	{
		radius = rad;
		color = col;
	}
	Circle(const Circle& copy)
	{
		this->radius = copy.radius;
		this->color = copy.color;
	}

	~Circle()
	{
		cout << "dest\n";
	}
private:
	double radius;
	string color;
};

class Complex
{
private:
	double x;
	double y;
public:
	double GetX();
	void SetX(double valueX);
	double GetY();
	void SetY(double valueY);
	void Print(double, double);
	Complex Sum(Complex, Complex);
	Complex()
	{
		x = 1;
		y = 1;
	}
	Complex(double valueX, double valueY)
	{
		x = valueX;
		y = valueY;
	}
	Complex(const Complex& copy)
	{
		this->x = copy.x;
		this->y = copy.y;
	}
	~Complex()
	{
		cout << endl << "dest\n";
	}
};

class Vector
{
public:
	Vector()
	{
		coordinateX = 0;
		coordinateY = 0;
	}
	Vector(double x, double y)
	{
		coordinateX = x;
		coordinateY = y;
	}
	Vector(const Vector& copy)
	{
		this->coordinateX = copy.coordinateX;
		this->coordinateY = copy.coordinateY;
	}
	~Vector()
	{
		cout << "dest\n";
	}
	void SetCoordinateX(double);
	void SetCoordinateY(double);
	double GetCoordinateY();
	double GetCoordinateX();
	double lenght_of_vector(double, double);
	void printCoordinates();
	double scalarProduct(double, double, double, double);
private:
	double coordinateX;
	double coordinateY;
};
