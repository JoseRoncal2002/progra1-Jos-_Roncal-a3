#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	int columnas, filas;
	bool simetrica;
	int**matriz;
	
	do
	{
		cout << "Inserte n: "; cin >> filas;
	} while (filas <= 0 || filas >= 10);
	do
	{
	cout << "Inserte m: "; cin >> columnas;
	} while (columnas <= 0 || columnas >= 10);

	cout << endl;

	matriz = new int*[filas];
	for (int i = 0; i < filas; i++)
	{
	matriz[i] = new int[columnas];


	for (int j = 0; j < columnas; j++)
		{
		if (i == j)
		{
		  simetrica = 1;
		}
		else
		{
		  simetrica = 0;
		}
		}
	}

	if (simetrica == true) {
		cout << "Si es simetrica" << endl;
	}
	else {
	cout << "No es simetrica" << endl;
	
	}

	for (int i = 0; i < filas; i++)
	{
		delete[] matriz[i];
	}

	delete[] matriz;
	
	_getch();
}