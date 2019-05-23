#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

double hallarArea(int radio)
{
	double area;

	area = (radio*radio)*3.1416;

	return area;
}

double hallarPerimetro(int radio)
{
	double perimetro;

	perimetro = 2*(3.1416)*radio;

	return perimetro;
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

	cout << "El area de la circunferencia es: " << hallarArea(circunferencia)<<endl;
	cout << "El perimetro de la circunferencia es: " << hallarPerimetro(circunferencia);

	_getch();
}
