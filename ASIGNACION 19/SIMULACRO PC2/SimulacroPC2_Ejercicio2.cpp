
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int* Determinar_area_perimetro(int l)
{
	int *r;
	r = new int[1];
	r[0] = pow(l, 2);
	r[1] = l * 4;
	return r;
}

int main()
{
	int l;
	while (1)
	{
		do
		{
			cout << "Inserte lado del cuadradro: "; cin >> l;
		} while (l < 1);
		cout << "El area del cuadrado es: " << Determinar_area_perimetro(l)[0] << endl;
		cout << "El perimetro del cuadrado es: " << Determinar_area_perimetro(l)[1] << endl;
		cout << endl;
	}
	_getch();
}
