// ConsoleApplication72.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int cursos,ciclo;
	float costo,montoInicial,descuento;

	cout << "Ingrese el numero de cursos:"; 
	cin >> cursos;
	cout << "Ingrese el numero ciclo a cursar:";
	cin >> ciclo;

	montoInicial = cursos * 155;

	if (ciclo>=1 && ciclo<=3)
	{
		descuento = (montoInicial * 10) / 100;
	
	}

	if (ciclo >= 4 && ciclo <= 6)
	{
		descuento = (montoInicial * 15) / 100;

	}

	if (ciclo >= 7 && ciclo <= 8)
	{
		descuento = (montoInicial * 17) / 100;

	}

	if (ciclo >= 9 && ciclo <= 10)
	{
		descuento = (montoInicial * 18) / 100;

	}

	costo = montoInicial - descuento;
	
	cout << "El costo es de $ " << costo;

	system("pause");
	return 0;
}

