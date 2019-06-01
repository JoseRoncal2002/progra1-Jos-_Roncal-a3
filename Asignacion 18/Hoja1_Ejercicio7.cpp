
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Multiplicar(long long n1)
{
	int d;
	cout << "==== Multiplicar Numero Grande =====\n" << endl;
	do
	{
		cout << "Insertar digito: "; cin >> d;
	} while (d < 0 || d > 9);
	cout << endl;
	cout << "Multiplicacion: \n" << d << " X " << n1 << " = " << d * n1 << endl;
	return;
}

void Suma(long long n1, long long n2)
{
	cout << "==== Sumar Numeros Grandes =====\n" << endl;
	cout << "Suma de los dos numeros: \n" << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	return;
}

long long MostrarNumeroGrande()
{
	long long nuevoNum;
	cout << "==== Mostrar Numero Grande =====\n" << endl;
	srand(time(NULL));
	nuevoNum = 100000000000 + rand() % (1000000000000 - 100000000000);
	cout << "Numero de 12 digitos aleatorio: " << nuevoNum << endl;
	return nuevoNum;
}

long long LeerNumeroGrande()
{
	int *n;
	long long num, mod = 10, div = 1;
	cout << "==== Leer Numero Grande =====\n" << endl;
	do {
		cout << "Inserte numero de 12 digitos: "; cin >> num;
	} while (num < 100000000000 || num > 999999999999);
	n = new int[12];
	for (int i = 0; i < 12; i++)
	{
		n[i] = (num % mod) / div;
		mod = mod * 10;
		div = div * 10;
	}
	cout << endl;
	for (int i = 11; i >= 0; i--)
	{
		cout << "Digito " << i + 1 << " = " << n[i] << endl;
	}
	delete n;
	return num;
}

int main()
{
	long long n1, n2;
	n1 = LeerNumeroGrande();
	cout << endl;
	n2 = MostrarNumeroGrande();
	cout << endl;
	Suma(n1, n2);
	cout << endl;
	Multiplicar(n1);
	cout << endl;
	_getch();
}

