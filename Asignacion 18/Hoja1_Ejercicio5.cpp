
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
	int *nota;
	int veinte = 0, cero = 0, aprobado = 0, desaprobado = 0;
	nota = new int[40];
	for (int i = 0; i < 40; i++)
	{
		do
		{
			cout << "Insertar nota de alumno " << i + 1 << ": ";
			cin >> nota[i];
		} while (nota[i] < 0 || nota[i] > 20);
		if (nota[i] == 20)
		{
			veinte++;
		}
		if (nota[i] == 0)
		{
			cero++;
		}
		if (nota[i] < 13)
		{
			desaprobado++;
		}
		if (nota[i] >= 13)
		{
			aprobado++;
		}
	}
	cout << endl;
	cout << "Cantidad de personas que obtuvieron 00: " << cero << endl;
	cout << "Cantidad de personas que obtuvieron 20: " << veinte << endl;
	cout << "cantidad de personas aprobadas: " << aprobado << endl;
	cout << "cantidad de personas desaprobadas: " << desaprobado << endl;
	delete nota;
	_getch();
}

