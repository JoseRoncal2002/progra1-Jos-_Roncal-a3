// ConsoleApplication38.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int golesL, golesV;
    char L[6] = "LOCAL";
	char V[10] = "VISITANTE";
	char E[7] = "EMPATE";

	cout << "Ingrese la cantidad de goles del equipo local :" << endl;
	cin >> golesL;
	cout << "Ingrese la cantidad de goles del equipo visitante :" << endl;
	cin >> golesV;

	if (golesL>golesV)
	{
		cout << "Gano el equipo " << L << endl;
	}
	
	if (golesV > golesL)
	{
		cout << "Gano el equipo " << V << endl;
	}
	if (golesV == golesL)
	{
		cout << E << endl;
	}


	system("pause");
	
}