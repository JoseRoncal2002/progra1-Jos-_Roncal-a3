// ConsoleApplication52.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int tipo, consumo;
	float precioT;

	cout << "Tipo de consumo:"<<endl;
	cin >> tipo;
	cout << "Consumo:" << endl;
	cin >> consumo;

	if (tipo==1)
	{
		precioT = consumo * 1.58;
	}

	if (tipo==2)
	{
		if (consumo<=100)
		{
			precioT = consumo * 0.35;
		}

		if (consumo > 100 && consumo<=500)
		{
			precioT = consumo * 1.05;
		}

		if (consumo > 500)
		{
			precioT = (500 * 1.05)+((consumo-500)*1.36);
		}
	}

	cout << "Total a pagar:" << precioT << endl;

	system("pause");
	return 0;
}

