

#include "pch.h"
#include "stdafx.h" 
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double factorial(double num) {

	int i = num;
	double resultado = 1;

	while (i>0)
	{
		resultado = resultado*i;
		--i;
	}

	return resultado;
}

double seno(int N, double X) {

	int i = 0;
	double resultado = 0;

	while (i<N)
	{
		resultado=(pow(-1, i))*(pow(X, 2 * i + 1) / factorial(2 * i + 1));
	}

	return resultado;
}

int digit(int N,int num) {

	int i = 1;
	num= num/pow(10, N);
	int resultado;

	resultado = num % 10;

	if (resultado<0)
	{
		resultado = resultado*-1;
	}
	if (resultado==0)
	{
		resultado = -1;
	}

	return resultado;
}


int main()
{
	int opcion;
	int N;
	double num;

	do
	{
	cout << "***************************************" << endl;
	cout << "MENU DE OPCIONES" << endl;
	cout << "***************************************" << endl;
	cout << "1. Calcular el seno" << endl;
	cout << "2. Hallar el enesimo termino " << endl;
	cout << "3. Fin" << endl;
	cout << "Ingrece opcion " << endl;
	cin >> opcion;

	if (opcion==1)
	{
		cout << "Ingrese el valor de N " << endl;
		cin >> N;
		cout << "Ingrese el numero " << endl;
		cin >> num;

		cout << seno(N,num) << endl;
	}

	if (opcion == 2)
	{
		cout << "Ingrese el valor de N " << endl;
		cin >> N;
		cout << "Ingrese el numero " << endl;
		cin >> num;

		cout << digit(N, num) << endl;

	}

	} while (opcion ==1 || opcion==2);
	

    return 0;
}