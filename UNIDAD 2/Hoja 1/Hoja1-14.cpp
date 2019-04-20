// ConsoleApplication59.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string numero;
	string cifra1, cifra2, cifra3;
	int cadena;

	cout << "Ingrese un numero de 3 cifras" << endl;
	cin >> numero;

	cifra1 = numero.substr(0, 1);
	cifra2 = numero.substr(1, 1);
	cifra3 = numero.substr(2, 1);

	cadena = int(stoi(numero));

	if (cadena > 999 || cadena < 100)
	{
		cout << "Numero incorrecto" << endl;
	}
	else
	{
		if (cifra1==cifra3)
		{
			cout << "Es numero capicua" << endl;
				
		}

		if (cifra1 != cifra3)
		{
			cout << "No es numero capicua" << endl;
		}

	}

	system("pause");
	return 0;
}
