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
		cout << cifra3 << cifra2 << cifra1 << endl;
	}

	system("pause");
	return 0;
}
