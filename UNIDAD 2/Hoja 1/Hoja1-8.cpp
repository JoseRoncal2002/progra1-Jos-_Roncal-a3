// ConsoleApplication37.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char genero;
	float numeroP,edad;

	cout << "Ingrese el sexo de la persona (F o M):"<<endl; 
	cin >> genero;
	cout << "Ingrese la edad de la persona:" << endl;
	cin >> edad;

	if (genero =='F')
	{
		numeroP = (220 - edad) / 10;
	}
	
	if (genero == 'M')
	{
		numeroP = (210 - edad) / 10;
	}

	cout << "El numero debe ser de " << rint(numeroP) << " pulsaciones por cada 10 segundos aproximadamente." << endl;

	system("pause");
	return 0;
}
