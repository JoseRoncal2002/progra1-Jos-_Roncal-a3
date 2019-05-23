// ConsoleApplication103.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int numeroInver(int n)
{
	int inver = n%10;
	n = n / 10;

	while (n>0)
	{
		inver= inver *10+(n % 10);
		n = n / 10;
	}
	return inver;
}

int main()
{
	int numero;

	cout << "Ingrese un numero mayor a 4 cifras" << endl;
	cin >> numero;
	while (numero<=999)
	{
		cout << "Ingrese un numero mayor a 4 cifras" << endl;
		cin >> numero;
	}

	cout << "Numero invertido: " << numeroInver(numero) << endl;
	_getch();
}



