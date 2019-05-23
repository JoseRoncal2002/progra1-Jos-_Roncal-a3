#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

void hallarAreayPerimetro(int radio)
{
	double area,perimetro;

	area = (radio*radio)*3.1416;
	perimetro = 2 * (3.1416)*radio;

	double *x1, *x2;
	x1 = &area;
	x2 = &perimetro;

	cout << "El area de la circunferencia es: " << *x1 << endl;
	cout << "El perimetro de la circunferencia es: " << *x2;

	return;
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

	hallarAreayPerimetro(circunferencia);

	_getch();
}
