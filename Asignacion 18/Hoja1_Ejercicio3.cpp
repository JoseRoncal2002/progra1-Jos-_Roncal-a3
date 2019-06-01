
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int *edad;
	int c = 0, menor = 101, arreglo, e;
	edad = new int[100];
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		edad[i] = 1 + rand() % (101 - 1);
		cout << " Edad persona " << i + 1 << ": " << edad[i] << endl;
		if (edad[i] >= 30 && edad[i] <= 50)
		{
			c++;
		}
		if (edad[i] < menor)
		{
			menor = edad[i];
			arreglo = i;
		}
	}
	cout << endl;
	cout << "Menor edad: Persona " << arreglo + 1 << " = " << menor << endl;
	cout << "Numero de personas entre 30 y 50 anios: " << c << endl;
	do {
		cout << "Buscar edad de persona: "; cin >> e;
	} while (e < 1 || e > 100);
	cout << "Edad: " << edad[e - 1];
	delete edad;
	_getch();
}
