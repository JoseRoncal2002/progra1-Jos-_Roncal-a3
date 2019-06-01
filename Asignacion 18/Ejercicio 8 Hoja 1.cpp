// ConsoleApplication123.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

void moda(int *notas, int numN) {

	int aux; //un temporal que ayuda al intercambio
	for (int i = 0;i < numN - 1;i++)
	{
		for (int j = i + 1;j < numN;j++)
			if (notas[i] > notas[j])
			{
				aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
			}
	}

	int number = notas[0];
	int mode = number;
	int count = 1;
	int countMode = 1;

	for (int i = 1; i < numN; i++)
	{
		if (notas[i] == number)
		{ // count occurrences of the current number
			++count;
		}
		else
		{ // now this is a different number
			if (count > countMode)
			{
				countMode = count; // mode is the biggest ocurrences
				mode = number;
			}
			count = 1; // reset count for the new number
			number = notas[i];
		}
	}

	cout << "Las notas que mas se repiten son: " << endl;
	cout << mode << endl;

	for (int i = 1; i < numN; i++)
	{
		if (notas[i] == number)
		{ // count occurrences of the current number
			++count;
		}
		else
		{ // now this is a different number
			if (count == countMode)
			{
				countMode = count; // mode is the biggest ocurrences
				mode = number;
				cout << mode << endl;
			}
			count = 1; // reset count for the new number
			number = notas[i];
		}
	}

	return;
}

void contador(int *notas, int numN) {

	int aux; //un temporal que ayuda al intercambio
	for (int i = 0;i < numN - 1;i++)
	{
		for (int j = i + 1;j < numN;j++)
			if (notas[i] > notas[j])
			{
				aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
			}
	}

	int number = notas[0];
	int num = number;
	int count = 1;
	int countNum = 1;

	for (int i = 1; i < numN + 1; i++)
	{
		if (notas[i] == number)
		{ // count occurrences of the current number
			++count;
		}
		else
		{
			if (notas[i] != number)
			{
				countNum = count;
				num = number;
				cout << "Cantidad de " << num << " : " << count << endl;
			}
			count = 1;
			number = notas[i];
		}
	}

	return;
}

int main()
{
	int *notas;
	int n;

	cout << "Ingrese numero de alumnos: ";
	cin >> n;

	notas = new int[n];

	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Ingrese nota del alumno " << i + 1 << " : ";
			cin >> notas[i];

		} while (notas[i] < 0 || notas[i]>20);

	}


	contador(notas, n);
	moda(notas, n);

	delete notas;
	_getch();
}
