// ConsoleApplication48.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char categoria;
	int horas, resultado;

	cout << "Ingrese categoria:" << endl;
	cin >> categoria;
	cout << "Ingrese cantidad de horas:" << endl;
	cin >> horas;

	if (categoria=='A')
	{
		resultado = 30 * horas;
	}

	if (categoria == 'B')
	{
		resultado = 35 * horas;
	}

	if (categoria == 'C')
	{
		resultado = 40 * horas;
	}

	if (categoria == 'D')
	{
		resultado = 45 * horas;
	}

	if (categoria == 'E')
	{
		resultado = 50 * horas;
	}

	cout << "Total a pagar:" << resultado<<endl;

	system("pause");
	return 0;

}


