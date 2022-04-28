#include "7.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int programm;
	cout << "Реализацию какого класса вы хотите посмотреть? (circle - 1, vector - 2, complex - 3) ";
	cin >> programm;

	if (programm == 1)
	{
        double radius;
        string color;
        cout << "Введите цвет круга: ";
        cin >> color;
        cout << "Введите радиус: ";
        cin >> radius;
        Circle my_circle(5, "white");

        my_circle.SetRadius(radius);
        my_circle.SetColor(color);

        cout << "Цвет: " << my_circle.GetColor() << endl;
        cout << "Площадь: " << my_circle.area(my_circle.GetRadius()) << endl;
        cout << "Длина окружности: " << my_circle.perimeter(my_circle.GetRadius());
	}
    else if (programm == 2)
    {
		double x, y;
		Vector my_vector;
		cout << "Enter the coordinates of the first vector by X: ";
		cin >> x;
		cout << endl;
		cout << "Enter the coordinates of the second vector by Y: ";
		cin >> y;
		cout << endl;
		my_vector.SetCoordinateX(x);
		my_vector.SetCoordinateY(y);
		my_vector.printCoordinates();
		cout << "The length of the first vector: " << my_vector.lenght_of_vector(x, y) << endl << endl;

		cout << "Enter the coordinates of the second vector by X: ";
		cin >> x;
		cout << endl;
		cout << "Enter the coordinates of the second vector by Y: ";
		cin >> y;
		cout << endl;
		Vector my_vector1(x, y);
		my_vector1.SetCoordinateX(x);
		my_vector1.SetCoordinateY(y);
		my_vector1.printCoordinates();
		cout << "The lenght of the second vector: " << my_vector1.lenght_of_vector(my_vector1.GetCoordinateX(), my_vector1.GetCoordinateY()) << endl << endl;

		cout << "Scalar product: ";
		cout << my_vector.scalarProduct(my_vector.GetCoordinateX(), my_vector1.GetCoordinateX(), my_vector.GetCoordinateY(), my_vector1.GetCoordinateY()) << endl;
    }
	else if (programm == 3)
	{
		Complex number1, number2;
		double x1, y1, x2, y2;
		cout << "x1: ";
		cin >> x1;
		cout << "y1: ";
		cin >> y1;
		number1.SetX(x1);
		number1.SetY(y1);

		cout << "x2: ";
		cin >> x2;
		cout << "y2: ";
		cin >> y2;
		number2.SetX(x2);
		number2.SetY(y2);

		Complex sum(number1.Sum(number1, number2));
		cout << sum.GetX() << "+i*" << sum.GetY();
	}
}

