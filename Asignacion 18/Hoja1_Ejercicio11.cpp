
#include"pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void Imprimir_Aprobado(int n, int curva)
{
	int *VNotas;
	VNotas = new int[n];
	for (int i = 0; i < n; i++)
	{
		do {
			cout << "Nota alumno " << i + 1 << ": "; cin >> VNotas[i];
		} while (VNotas[i] < 0 || VNotas[i] > 20);
	}
	cout << endl;
	cout << "Alumnos aprobados: " << endl;
	for (int i = 0; i < n; i++)
	{
		if ((VNotas[i] + curva) >= 13)
		{
			if ((VNotas[i] + curva) > 20)
			{
				cout << "Alumno " << i + 1 << ": " << 20 << endl;
			}
			else
			{
				cout << "Alumno " << i + 1 << ": " << VNotas[i] + curva << endl;
			}
		}
	}
	return;
}

int Aumenta_Curva()
{
	int curva;
	do
	{
		cout << "Insertar curva: "; cin >> curva;
	} while (curva < 0 || curva > 5);
	return curva;
}

void Genera_Vector()
{
	
	int n, curva;
	do {
		cout << "Insertar numero de elementos: "; cin >> n;
	} while (n < 1);
	curva = Aumenta_Curva();
	Imprimir_Aprobado(n, curva);
	return;
}

int main()
{
	Genera_Vector();
	_getch();
}