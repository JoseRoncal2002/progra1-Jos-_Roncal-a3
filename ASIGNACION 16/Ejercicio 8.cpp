#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

void Esbisiesto(int anio)
{
	
	
	
		if ((anio%4==0 && anio % 100 != 0) || (anio % 4 == 0 && anio%400==0) ){

		cout << "Es Bisiesto" << endl;
		}
		else
	{
		cout << "No es bisiesto" << endl;
	}
		return;
	
}

int main()
{
	int anio;

	cout << "Ingrese un anio" << endl;
	cin >> anio;
	while (anio < 0)
	{
		cout << "Ingrese un anio" << endl;
		cin >> anio;
	}

	Esbisiesto(anio);

	_getch();
}
