// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	int numero;

	cout << "Ingrese un numero entero:" << endl;
	cin >> numero;

	if (numero % 2 ==0)
	{
		cout << "Es un numero par" << endl;
	}
	else
	{
		cout << "Es un numero impar" << endl;
	}

	system("pause");
    return 0;
}

