// ConsoleApplication120.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int numPersonas(int *montos, int n) {

	int numPersonas = 0;

	for (int i = 0; i < n; i++)
	{
		if (montos[i] <= 300 && montos[i]>=100)
		{
			numPersonas++;
		}
	}

	return numPersonas;

}

int numMontoI(int *montos, int n) {

	int numImpares = 0;

	for (int i = 0; i < n; i++)
	{
		if (montos[i]%2!=0)
		{
			numImpares++;
		}
	}

	return numImpares;

}

int main()
{
	int n;

	do
	{
	cout << "Ingrese numero de personas: " << endl;
	cin >> n;

	} while (n>200);
    
	int *montos;
	montos = new int[n];

	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		montos[i]= 25 + rand() % (501 - 25);
	}

	cout << "Montos generados al azar: " << endl;
	cout << "***********************************************************************" << endl;

	for (int i = 0; i < n; i++)
	{
		cout <<"Monto "<<i+1<<": "<< montos[i] << endl;
	}

	cout << "Montos ordenados ascendentemente: " << endl;
	cout << "***********************************************************************" << endl;

	int aux; //un temporal que ayuda al intercambio
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
			if (montos[i] > montos[j])
			{
				aux = montos[i];
				montos[i] = montos[j];
				montos[j] = aux;
			}
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Monto " << i + 1 << ": " << montos[i] << endl;
	}

	cout << "Numero de personas que gastaron entre 100 y 300 soles en bebidas: " << numPersonas(montos, n) << endl;
	cout << "Cantidad de montos que tienen asociadas una cantidad impar: " << numMontoI(montos, n) << endl;

	delete montos;
	_getch();
}


