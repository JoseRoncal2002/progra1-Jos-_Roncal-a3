// ConsoleApplication116.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h> 

using namespace std;

void menu(char *opcion) {
	cout << "MENU PRINCIPAL" << endl;
	cout << "A. Sumar 2 Numeros Complejos." << endl;
	cout << "B. Restar 2 Numeros Complejos." << endl;
	cout << "X. Salir del Programa" << endl;
	cout << "Opcion: ";
	cin >> *opcion;
}




double factorial(int n) {
	int *resultado; //Paso 1
	resultado = new int;// Paso 2
	*resultado = 1;//Paso 3


	for (int i = 1; i <= n; i++)
	{
		*resultado = *resultado * i; //Paso 3
	}



	return *resultado;
}

double SumaNumeroC(int *n, int *x, int *nn, int *xx) {

	double *resultado = new double;

	*resultado = (*n+*nn)+factorial(*x+*xx);
	
	return *resultado;

}

double RestaNumeroC(int *n, int *x, int *nn, int *xx) {

	double *resultado = new double;

	*resultado = (*n - *nn) + factorial(*x - *xx);

	return *resultado;

}



/* FUNCION MAIN*/
int main()
{
	int *n = new int;// Paso 1 y 2
	int *x = new int;// Paso 1 y 2
	int *nn = new int;// Paso 1 y 2
	int *xx = new int;// Paso 1 y 2
	char *opcion = new char; //Paso 1 y 2

	do
	{
		menu(opcion); // Paso 3
		switch (*opcion) //Paso 3
		{
		case 'A':
			cout << "Numero 1 " << endl;

			
				cout << "Parte Real: ";
				cin >> *n;	//Paso 3

			

			
				cout << "Parte Imaginaria: ";
				cin >> *x;	//Paso 3

			

			cout << "Numero 2 " << endl;

			
				cout << "Parte Real: ";
				cin >> *nn;	//Paso 3

			

			
				cout << "Parte Imaginaria: ";
				cin >> *xx;	//Paso 3

			

			cout << "Resultado: " << SumaNumeroC(n, x, nn, xx) << endl;
			break;
		case 'B':

			cout << "Numero 1 " << endl;

			
				cout << "Parte Real: ";
				cin >> *n;	//Paso 3

			

			
				cout << "Parte Imaginaria: ";
				cin >> *x;	//Paso 3

			

			cout << "Numero 2 " << endl;

			
				cout << "Parte Real: ";
				cin >> *nn;	//Paso 3

			

			
				cout << "Parte Imaginaria: ";
				cin >> *xx;	//Paso 3

			

			cout << "Resultado: " << RestaNumeroC(n, x, nn, xx) << endl;
			break;
		
		default:
			break;
		}

	} while (*opcion != 'X');

	delete opcion;
	delete n;
	delete x;
	delete nn;
	delete xx;

	system("pause");
	return 0;
}
