// ConsoleApplication112.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

void Intercambiar(int *x, int *y)
{
	int auxY;
	int auxX;

	auxX = *x;
	auxY = *y;

	if (*x>*y)
	{
	*x = auxY;
	*y = auxX;

	}
}


int main()
{
	int X ;
	int Y ;

	cout << "Ingrese X: " << endl;
	cin >> X;
	cout << "Ingrese Y: " << endl;
	cin >> Y;

	int *x1, *y1;

	x1 = &X;
	y1 = &Y;

	cout << "Valor inicial X= " << X << endl;
	cout << "Valor inicial Y= " << Y << endl;

	Intercambiar(x1, y1);

	cout << "X= " << X << endl;
	cout << "Y= " << Y << endl;

	_getch();
}
