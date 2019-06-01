
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
	int *notas;
	int numeroMayor = 21, numeroMenor = 0, k = 0;
	double promedio = 0;
	notas = new int[6];
	for (int i = 0; i < 6; i++)
	{
		do
		{
			cout << "Ingrese nota " << i + 1 << ": ";
			cin >> notas[i];
		} while (notas[i] < 0 || notas[i] > 20);
		if (notas[i] == numeroMenor)
		{
			k++;
		}
		if (notas[i] < numeroMayor)
		{
			numeroMenor = notas[i];
		}
		numeroMayor = notas[i];
		promedio = promedio + notas[i];
	}
	cout << endl;
	cout << "La nota que no se considera es: " << numeroMenor << endl;
	if (k > 0)
	{
		cout << "Solo se elimina un solo " << numeroMenor << endl;
	}
	promedio = (promedio - numeroMenor) / 5;
	cout << "Promedio = " << promedio << endl;
	delete notas;
	_getch();
}



