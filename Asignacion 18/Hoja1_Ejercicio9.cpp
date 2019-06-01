
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int INVERTIR(int n)
{
	int d1, d2, d3, numeroInvertido;
	if (n >= 0 && n <= 9)
	{
		numeroInvertido = n;
	}
	if (n >= 10 && n <= 99)
	{
		d1 = (n % 10) * 10;
		d2 = n / 10;
		numeroInvertido = d1 + d2;
	}
	if (n >= 100 && n <= 199)
	{
		d1 = (n % 10) * 100;
		d2 = ((n % 100) / 10) * 10;
		d3 = n / 100;
		numeroInvertido = d1 + d2 + d3;
	}
	return numeroInvertido;
}

int main()
{
	int *n;
	int invertido, c = 0;
	n = new int[10];
	for (int i = 0; i < 10; i++)
	{
		do {
			cout << "Inserte numero " << i + 1 << ": "; cin >> n[i];
		} while (n[i] < 0 || n[i] >= 200);
		invertido = INVERTIR(n[i]);
		if (n[i] == invertido)
		{
			c++;
		}
	}
	cout << endl;
	cout << "Hay " << c << " numero(s) capicua(s)" << endl;
	delete n;
	_getch();
}

