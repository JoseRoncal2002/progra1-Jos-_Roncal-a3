// ConsoleApplication130.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void Primos(int *n, int  NumeroT) {

	int numNomarcado = 2;
	int aux;
	
	for (int i = 2; i < NumeroT; i++)
	{
		cout << n[i] << endl;
	}

	cout << endl;
	cout  << endl;

	do
	{
		for (int i = pow(numNomarcado, 2); i < NumeroT; i++)
		{
			if (n[i] % numNomarcado == 0)
			{
				n[i] = -1;
			}
		}

		for (int j = numNomarcado++; j < NumeroT; j++)
		{
			if (pow(numNomarcado, 2) > NumeroT)
			{
				break;
			}
			if (n[j] != -1)
			{
				n[j] = numNomarcado;
				n[j] = numNomarcado-1;
				break;
			}
		}


	} while (pow(numNomarcado, 2)< NumeroT);

	
	for (int i = 2; i < NumeroT; i++)
	{
		cout << n[i] << " | ";
	}

	return;
}


int main()
{
	int N;
	
	do
	{
		cout << "Ingrese N: "; cin >> N;
	} while (N <= 2);
	
	int *n;
	n = new int[N];

	for (int i = 0; i < N+1; i++)
	{
		n[i] = i;
	}

	cout << "Numeros Primos: " << endl;
	cout << "**********************************************" << endl;


	Primos(n, N+1);

	_getch();
	return 0;
}
