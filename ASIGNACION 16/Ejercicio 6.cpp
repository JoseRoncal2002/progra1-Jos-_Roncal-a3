// ConsoleApplication102.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

double solesaDolares(double *a)
{
	*a = *a / 3.33;
	
	return *a;
}

double DolaresaSoles(double *a)
{
	*a = *a * 3.33;

	return *a;
}

int main()
{
	char SoD;
	double cantidad;

	double *C;
	C = &cantidad;
	
	cout << "Desea cambiar dolares o soles(D:dolar, S:soles)"<<endl;
	cin >> SoD;
	while (SoD!= 'D' && SoD != 'S')
	{
		cout << "Desea cambiar dolares o soles(D:dolar, S:soles)" << endl;
		cin >> SoD;
	}

	if (SoD=='S')
	{
		cout << "Ingrese cantidad de soles " << endl;
		cin >> cantidad;

		cout << "Cantidad en dolares: " << solesaDolares(C) << endl;
	}

	if (SoD == 'D')
	{
		cout << "Ingrese cantidad de Dolares " << endl;
		cin >> cantidad;

		cout << "Cantidad en Soles: " << DolaresaSoles(C) << endl;
	}

	_getch();
}
