// ConsoleApplication50.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float num, V;
	float resultado;

	cout << "Ingresa num"<<endl;
	cin >> num;
	cout << "Ingresa V" << endl;
	cin >> V;

	if (num == 1)
	{
		resultado = 100 * V;
	}

	if (num == 2)
	{
		resultado = pow(100,V);
	}

	if (num == 3)
	{
		resultado = 100 / V;
	}

	if (num!=1 && num != 2 && num != 3)
	{
		resultado = 0;
			 
	}
	

	cout << "resultado:" << resultado << endl;

	system("pause");
	return 0;
}


