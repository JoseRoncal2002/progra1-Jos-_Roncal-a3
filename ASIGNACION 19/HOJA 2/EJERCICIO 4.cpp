// ConsoleApplication131.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tamanio;
	int coste = 0;
	
	cout << "Ingrese el tamanio del mensaje: ";cin >> tamanio;

	char *mensaje;
	mensaje = new char[tamanio];

	cout << "Ingrese el mensaje (caracter por caracter, espacio= - ):  ";
	for (int i = 0; i < tamanio; i++)
	{
		cin >> mensaje[i];
		if ((mensaje[i] >= 48) && (mensaje[i] <= 57))
		{
			coste += 20;
		}
		else
		{
			if ((mensaje[i] >= 65) && (mensaje[i] <= 90) || (mensaje[i] >= 97) && (mensaje[i] <= 122))
			{
				coste += 10;
			}
			else
			{
				if (mensaje[i] == 45)
				{
					coste += 0;
				}
				else
				{
					coste += 30;
				}
			}

		}
	}

	cout << "Valor del mensaje: "<<coste << endl;

	system("pause");
}


