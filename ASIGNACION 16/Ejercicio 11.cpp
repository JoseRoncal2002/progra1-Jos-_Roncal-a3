#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

double hallarArea(int radio)
{
	double area;

	area= (radio*radio)*3.14;

	return area;
}

int main()
{
	double circunferencia;

	cout << "Ingrese un radio de circunferencia" << endl;
	cin >> circunferencia;
	while (circunferencia < 0)
	{
		cout << "Ingrese un radio de circunferencia" << endl;
		cin >> circunferencia;
	}

	cout << "El area de la circunferencia es: " << hallarArea(circunferencia);

	_getch();
}
