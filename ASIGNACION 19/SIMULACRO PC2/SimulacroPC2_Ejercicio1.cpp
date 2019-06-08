#include "pch.h"
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int Fibonacci(int n)
{
	int res;
	int *num;
	num = new int[n];
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == 1)
		{
			num[i] = 1;
		}
		else
		{
			num[i] = num[i - 1] + num[i - 2];
		}
		res = num[i];
	}
	return res;
}

void Graficar(int n)
{
	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n - j - 1; ++i)
		{
			cout << " ";
		}
		for (int i = 0; i < j + 1; ++i)
		{
			cout << Fibonacci(i + 1) << " ";
		}
		cout << endl;
	}
	return;
}

void menu()
{
	cout << endl;
	cout << "Menu de Opciones\n";
	cout << "1.- Graficar\n";
	cout << "2.- Hallar el n-esimo termino\n";
	cout << "3.- Fin\n";
	return;
}

int main()
{
	int n;
	int opcion;
	while (1)
	{
		menu();
		do {
			cout << "Ingrese opcion: "; cin >> opcion;
		} while (opcion < 1 || opcion > 3);
		if (opcion == 1)
		{
			cout << "Ingrese cantidad de filas: "; cin >> n;
			Graficar(n);
			cout << endl;
		}
		if (opcion == 2)
		{
			do {
				cout << "Ingrese valor de N: "; cin >> n;
			} while (n < 0);
			cout << "El termino numero " << n << " es: " << Fibonacci(n) << endl;
			cout << endl;
		}
		if (opcion == 3)
		{
			break;
		}
	}
	_getch();
}