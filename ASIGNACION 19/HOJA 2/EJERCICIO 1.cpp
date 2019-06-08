// ConsoleApplication125.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
	cout << "Ingrese N: ";
	cin >> N;

	} while (N>100);

	int *pernos;
	pernos = new int[N];

	cout << "Tamanio en mm de los pernos: " << endl;
	cout << "********************************************" << endl;

	for (int i = 0; i < N; i++)
	{
		pernos[i] = 5 + rand() % (31 - 5);
		cout << pernos[i] << endl;
	}

	cout << "Tamanio en mm de los pernos ordena descendentemente: " << endl;
	cout << "********************************************" << endl;

	
	int aux; //un temporal que ayuda al intercambio
	for (int i = 0;i < N - 1;i++)
	{
		for (int j = i + 1;j < N;j++)
			if (pernos[i] < pernos[j])
			{
				aux = pernos[i];
				pernos[i] = pernos[j];
				pernos[j] = aux;
			}
	}

	int sumaDiametro=0;

	for (int i = 0; i < N; i++)
	{
		cout << pernos[i] << endl;
		sumaDiametro = sumaDiametro + pernos[i];
	}
	
	cout << "El diametro promedio es: " << sumaDiametro / N<<endl;

	int diametroDE;
	int inferioresDiametro=0;

	cout << "Ingrese el diametro DE: ";
	cin >> diametroDE;

	for (int i = 0; i < N; i++)
	{
		if (pernos[i]<diametroDE)
		{
			inferioresDiametro++;
		}
	}

	cout << inferioresDiametro << " pernos tienen un diametro inferior a " << diametroDE<<endl;
	if (inferioresDiametro>N/2)
	{
		cout << "Lote defectuoso"<<endl;
	}

	_getch();
}


