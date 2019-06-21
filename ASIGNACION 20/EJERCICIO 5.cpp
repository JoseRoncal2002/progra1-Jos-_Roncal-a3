#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace System;
using namespace std;

void GenerarValoresMatriz(int** matriz, int& filas, int& columnas) {
	for (int fila = 0; fila < filas; fila++) {
		for (int columna = 0; columna < columnas; columna++) {
			//srand(time(NULL));
			matriz[fila][columna] = rand() % 10 + 1;
			//_sleep(30);
		}
	}
}

void MostrarMatriz(int** matriz, int& filas, int& columnas) {
	cout << "\t\t";
	for (int columna = 0; columna < columnas; columna++) {
		cout << "Candidato " << columna + 1 << "\t\t";
	}
	cout << endl;

	for (int fila = 0; fila < filas; fila++) {
		cout<<"Mesa " << fila + 1 << "\t\t";
	
		for (int columna = 0; columna < columnas; columna++) {
			cout << matriz[fila][columna] << "\t\t\t";
		}
		cout << endl;
	}
}

int SumaCandidato(int** matriz, int& filas, int candidato) {
	int suma = 0;
	for (int fila = 0; fila < filas; fila++) {
		suma = suma + matriz[fila][candidato];
	}
	return suma;
}

float Totalvotos(int** matriz, int fila, int columnas) {

	int sumaTotal = 0;
	
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columnas; j++) {
			sumaTotal += matriz[i][j];
		}
	}
	return sumaTotal;
}

int MayorArrayPos(float* votosCandidato, int& columnas) {
	int candidatomayor = -1;
	int mayor = -1;
	for (int i = 0; i < columnas;i++) {
		if (votosCandidato[i] > mayor) {
			mayor = votosCandidato[i];
			candidatomayor = i;
		}
	}

	return candidatomayor;
}

int Segundolugar(float* votosCandidato, int& columnas) {
	int candidatomayor = -1;
	int mayor = -1;
	for (int i = 0; i < columnas;i++) {
		if (votosCandidato[i] > mayor && i!= MayorArrayPos(votosCandidato, columnas)) {
			mayor = votosCandidato[i];
			candidatomayor = i;
		}
	}

	return candidatomayor;
}

int main()
{
	int** matriz;
	int filas = 4;
	int columnas = 5;
	int aux = -1;
	float * votosTotales = new float[columnas];;
	float* votosCandidato = new float[columnas];;
	float* porcentaje = new float[columnas];;

	matriz = new int*[4];
	for (int fila = 0; fila < filas; fila++)
		matriz[fila] = new int[columnas];

	GenerarValoresMatriz(matriz, filas, columnas);

	MostrarMatriz(matriz, filas, columnas);

	for (int i = 0; i <= filas; i++)
	{
		votosTotales[i] = Totalvotos(matriz, filas, columnas);
		votosCandidato[i] = SumaCandidato(matriz, filas, i);
		porcentaje[i] = votosCandidato[i]/votosTotales[i]*100;
		cout << "El total de votos del candidato "<<i+1<<": " << votosCandidato[i] << endl;
		cout << "Porcentaje: " << porcentaje[i] << endl;
	}
	
	cout << "El candidato mas votado es el numero: " << MayorArrayPos(votosCandidato, columnas)+1<<endl;

	
	for (int i = 0; i < columnas; i++)
	{
		if (porcentaje[i]>50)
		{
			cout << "El ganador es: " << i + 1<<endl;
			break;
		}
		else
		{
			cout << "Los candidatos " << MayorArrayPos(votosCandidato, columnas) + 1 << " y "<<Segundolugar(votosCandidato, columnas)+1<<" Iran a segunda vuelta";
			break;
		}

	}

	_getch();
	return 0;
}