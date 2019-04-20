// ConsoleApplication49.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int dia, mes;

    cout << "Ingrese el dia nacimiento:"<<endl; 
	cin >> dia;
	cout << "Ingrese el mes de nacimiento:" << endl;
	cin>> mes;
	
	if ((mes==12 && dia>=22)||(mes==1 && dia<=20 ))
	{
		cout << "Su signo es Capricornio" << endl;
	}

	if ((mes==1 && dia>=21)||(mes==2 && dia<=19 ))
	{
		cout << "Su signo es Acuario" << endl;
	}

	if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
	{
		cout << "Su signo es Piscis" << endl;
	}

	if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
	{
		cout << "Su signo es Aries" << endl;
	}

	if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 21))
	{
		cout << "Su signo es Tauro" << endl;
	}

	if ((mes == 5 && dia >= 22) || (mes == 6 && dia <= 21))
	{
		cout << "Su signo es Geminis" << endl;
	}

	if ((mes == 6 && dia >= 22) || (mes == 7 && dia <= 23))
	{
		cout << "Su signo es Cancer" << endl;
	}

	if ((mes == 7 && dia >= 24) || (mes == 8 && dia <= 23))
	{
		cout << "Su signo es Leo" << endl;
	}

	if ((mes == 8 && dia >= 24) || (mes == 9 && dia <= 23))
	{
		cout << "Su signo es Virgo" << endl;
	}

	if ((mes == 9 && dia >= 24) || (mes == 10 && dia <= 23))
	{
		cout << "Su signo es Libra" << endl;
	}

	if ((mes == 10 && dia >= 24) || (mes == 11 && dia <= 22))
	{
		cout << "Su signo es Escorpio" << endl;
	}

	if ((mes == 11 && dia >= 23) || (mes == 12 && dia <= 21))
	{
		cout << "Su signo es Sagitario" << endl;
	}

	system("pause");
	return 0;
}


