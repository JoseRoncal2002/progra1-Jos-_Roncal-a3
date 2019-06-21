#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace System;
using namespace std;

void IniciarMatrizCeros(int** matriz, int& filas, int& columnas) {
	for (int fila = 0; fila < filas; fila++) {
		for (int columna = 0; columna < columnas; columna++) {
			matriz[fila][columna] = 0;
		}
	}
}

void GenerarValoresMatriz(int** matriz, int &filas, int &columnas) {
	for (int fila = 0; fila < filas; fila++) {
		for (int columna = 0; columna < columnas; columna++) {
			matriz[fila][columna] = rand() % 10;
		}
	}
}

void MostrarMatriz(int** matriz, int& filas, int& columnas) {
	for (int fila = 0; fila < filas; fila++) {
		for (int columna = 0; columna < columnas; columna++) {
			cout << matriz[fila][columna] << " ";
		}
		cout << endl;
	}
}

void MostrarMatrizTranspuesta(int** matriz, int& filas, int& columnas) {
	for (int columna = 0; columna < columnas; columna++) {
		for (int fila = 0; fila < filas; fila++) {
			cout << matriz[fila][columna] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int** matriz;
	int filas;
	int columnas;
	int* sumas;
	float* promedios;
	int posFila = -1;
	int posCol = -1;
	int mayorValor = -1;


	do {
		cout << "Ingrese el numero de filas:";
		cin >> filas;
	} while (filas <= 0 || filas > 10);
	do {
		cout << "Ingrese el numero de columnas:";
		cin >> columnas;
	} while (columnas <= 0 || columnas > 10);

	matriz = new int*[filas];
	for (int fila = 0; fila < filas; fila++)
		matriz[fila] = new int[columnas];

	sumas = new int[filas];
	promedios = new float[filas];

	IniciarMatrizCeros(matriz, filas, columnas);
	
	GenerarValoresMatriz(matriz, filas, columnas);

	MostrarMatriz(matriz, filas, columnas);

	cout << endl;

	MostrarMatrizTranspuesta(matriz, filas, columnas);

	cout << endl;


	_getch();
	return 0;
}
