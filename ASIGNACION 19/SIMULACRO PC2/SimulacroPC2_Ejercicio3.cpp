
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Devuelve_menor(int n, int menor, int i)
{
	if (n == menor)
	{
		cout << "Alumno " << i + 1 << ": " << n << endl;
	}
	return;
}

void Lista_DebajodelPromedio(int n, int p, int i)
{
	if (n < p)
	{
		cout << "Alumno " << i + 1 << ": " << n << endl;
	}
	return;
}

void GenerarMostarDatos()
{
	srand(time(NULL));
	int n, p = 0, menor = 51;
	int *Vpuntajes;
	Vpuntajes = new int[40];
	for (int i = 0; i < 40; i++)
	{
		Vpuntajes[i] = rand() % 51;
		p = p + Vpuntajes[i];
		if (Vpuntajes[i] < menor)
		{
			menor = Vpuntajes[i];
		}
	}
	cout << "Lista Total de Alumnos\n";
	p = p / 40;
	for (int i = 0; i < 40; i++)
	{
		cout << "Alumno " << i + 1 << ": " << Vpuntajes[i] << endl;
	}
	cout << endl;
	cout << "Lista de Alumnos debajo del promedio (" << p << ")\n";
	for (int i = 0; i < 40; i++)
	{
		n = Vpuntajes[i];
		Lista_DebajodelPromedio(n, p, i);
	}
	cout << endl;
	cout << "Alumnos que obtuvieron el menor puntaje (" << menor << ")\n";
	for (int i = 0; i < 40; i++)
	{
		n = Vpuntajes[i];
		Devuelve_menor(n, menor, i);
	}
	return;
}

int main()
{
	GenerarMostarDatos();
	_getch();
}

