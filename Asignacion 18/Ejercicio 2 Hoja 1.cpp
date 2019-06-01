

#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

float promedio(int *pesos) {

	float aux = 0;

	for (int i = 0; i < 10; i++)
	{
		aux = aux + pesos[i];
	}

	float promedio;

	promedio = aux/ 10;

	return promedio;
}

int mayor(int *pesos) {

	int mayor = pesos[0]; //Así empezamos a comparar

	for (int i = 0; i < 10; i++) {

		if (pesos[i] > mayor) {
			mayor = pesos[i];
		}
	}

	return mayor;

}

int personasD(int *pesos) {

	int numDelgados=0;

	for (int i = 0; i < 10; i++)
	{
		if (pesos[i]<53)
		{
			numDelgados++;
		}
	}

	return numDelgados;
}

int personasM(int *pesos) {

	int numMediana=0;

	for (int i = 0; i < 10; i++)
	{
		if (pesos[i] >= 53 && pesos[i]<=60)
		{
			numMediana++;
		}
	}

	return numMediana;
}

int personasG(int *pesos) {

	int numGruesa=0;

	for (int i = 0; i < 10; i++)
	{
		if (pesos[i] > 60)
		{
			numGruesa++;
		}
	}

	return numGruesa;
}

int main()
{
	int *pesos;
	pesos = new int[10];

	for (int i = 0; i < 10; i++)
	{
		do
		{
			cout << "Ingrese peso del cliente " << i + 1 << ": ";
			cin >> pesos[i];
		} while (pesos[i] < 0 );

	}

	cout << "El peso promedio es: " << promedio(pesos) << endl;
	cout << "El peso de la persona que pesa mas es: " << mayor(pesos) << endl;
	cout << "El numero de personas cuya contextura es delgada (si su peso es menor a 53 kilos) es: " << personasD(pesos) << endl;
	cout << "El numero de personas cuya contextura es mediana (si su peso esta entre 53 y 60 kilos inclusive) es: " << personasM(pesos) << endl;
	cout << "El numero de personas cuya contextura es gruesa (si su peso es mayor a 60 kilos) es: " << personasG(pesos) << endl;

	delete[]pesos;
	_getch();
}
