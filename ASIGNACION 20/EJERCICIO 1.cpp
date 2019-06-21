#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
using namespace System;

void SumaFilas(int** matriz, int& filas, int& columnas, int* sumas) {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			sumas[i] = sumas[i] + matriz[i][j];
		}
	}
}

int MenorArregloInt(int* arreglo, int& tamanio) {
	int menor = 1000;
	for (int i = 0; i < tamanio; i++) {
		if (arreglo[i] < menor) {
			menor = arreglo[i];
		}
	}

	return menor;
}

void PromedioColumnas(int** matriz, int& filas, int& columnas, float* promedios) {
	for (int i = 0; i < columnas; i++) {
		for (int j = 0; j < filas; j++) {
			promedios[i] = promedios[i] + matriz[j][i];
		}
		promedios[i] = promedios[i] / filas;
	}
}

float MayorArregloFloat(float* arreglo, int& tamanio) {
	float mayor = -1.0;
	for (int i = 0; i < tamanio; i++) {
		if (arreglo[i] > mayor) {
			mayor = arreglo[i];
		}
	}

	return mayor;
}

void MayorMatrizInt(int** matriz, int& filas, int& columnas, int& mayorValor, int& posFila, int& posCol) {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (matriz[i][j] > mayorValor) {
				mayorValor = matriz[i][j];
				posFila = i;
				posCol = j;
			}
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

void IniciarMatrizCeros(int** matriz, int& filas, int& columnas) {
	for (int fila = 0; fila < filas; fila++) {
		for (int columna = 0; columna < columnas; columna++) {
			matriz[fila][columna] = 0;
		}
	}
}

void IniciarArregloCerosInt(int* arreglo, int& tamanio) {
	for (int i = 0; i < tamanio; i++) {
		arreglo[i] = 0;
	}
}

void IniciarArregloCerosFloat(float* arreglo, int& tamanio) {
	for (int i = 0; i < tamanio; i++) {
		arreglo[i] = 0.0;
	}
}

int main()
{
	int **matriz;
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
	for (int i = 0; i < filas; i++)
		matriz[i] = new int[columnas];
	
	sumas = new int[filas];
	promedios = new float[filas];

	IniciarMatrizCeros(matriz, filas, columnas);
	IniciarArregloCerosInt(sumas, filas);
	IniciarArregloCerosFloat(promedios, filas);

	

	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++) {
			cout << "Ingrese el valor de " << i << "," << j<<": ";
			cin >> matriz[i][j];
		}
	}

	MostrarMatriz(matriz, filas, columnas);

	cout << endl;

	SumaFilas(matriz, filas, columnas, sumas);
	
	cout << endl;

	for (int i = 0; i < filas; i++) {
		cout << "La suma de la fila #" << i << ": " << sumas[i] << endl;
	}
	cout << "El menor valor de las sumas es: " << MenorArregloInt(sumas, filas) << endl;;

	cout << endl;

	PromedioColumnas(matriz, filas, columnas, promedios);

	for (int i = 0; i < filas; i++) {
		cout << "El promedio de la columna #" << i << ": " << promedios[i] << endl;
	}
	cout << "El mayor valor de los promedios es: " << MayorArregloFloat(promedios, columnas) << endl;
	cout << endl;

	MayorMatrizInt(matriz, filas, columnas, mayorValor, posFila, posCol);
	cout << "El mayor valor de la matriz es: " << mayorValor << endl;
	cout << "Fila: " << posFila << endl;
	cout << "Columna: " << posCol << endl;

	for (int fila = 0; fila < filas; fila++)
		delete[] matriz[fila];

	delete[] matriz;
	delete[] sumas;
	delete[] promedios;

	_getch();
    return 0;
}
