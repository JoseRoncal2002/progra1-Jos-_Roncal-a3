

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

float promedio(int *notas, int numN) {

	float aux = 0;

	for (int i = 0; i < numN; i++)
	{
		aux = aux + notas[i];
	}

	float promedio;

	promedio = aux / numN;

	return promedio;
}

int mayor(int *notas,int numN) {

	int mayor = notas[0]; //Así empezamos a comparar

	for (int i = 0; i < numN; i++) {

		if (notas[i] > mayor) {
			mayor = notas[i];
		}
	}

	return mayor;

}

int menor(int *notas, int numN) {

	int menor = notas[0]; //Así empezamos a comparar

	for (int i = 0; i < numN; i++) {

		if (notas[i] < menor) {
			menor = notas[i];
		}
	}

	return menor;

}

int moda(int *notas, int numN) {

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

	return mode;
}

int main()
{
	int *notas;
	int numN;

	cout << "Ingrese numero de alumnos: ";
	cin >> numN;

	notas = new int[numN];

	for (int i = 0; i < numN; i++)
	{
		do
		{
			cout << "Ingrese nota del alumno " << i + 1 << ": ";
			cin >> notas[i];
		} while (notas[i] < 0 || notas[i] > 20);

	}

	cout << "El promedio de Notas es: " << promedio(notas, numN) << endl;
	cout << "La moda es: " << moda(notas, numN) << endl;
	cout << "La maxima nota es: " << mayor(notas, numN) << endl;
	cout << "La minima nota es: " << menor(notas, numN) << endl;

	delete[]notas;
	_getch();
}
