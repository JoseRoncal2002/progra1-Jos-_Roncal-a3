// ConsoleApplication128.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
	int N;

	do
	{
		cout << "numero de elementos: ";
		cin >> N;

	} while (N > 50);

	int *vector;
	vector = new int[N];

	cout << "Vector: " << endl;
	cout << "********************************************" << endl;

	for (int i = 0; i < N; i++)
	{
		vector[i] = 1 + rand() % (101 - 1);
		cout << vector[i] << endl;
	}

	cout << endl;

	cout << "Secuencia: " << endl;
	cout << "********************************************" << endl;


	for (int i = 0;i < N ;i++)
	{

		cout << vector[i]<<"  ";
		if (vector[i]>vector[i+1])
		{
			cout << endl;
		}
	
	}

	_getch();
}