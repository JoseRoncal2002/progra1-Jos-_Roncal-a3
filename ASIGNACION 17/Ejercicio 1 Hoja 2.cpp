// ConsoleApplication115.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h> 

using namespace std;

void menu(int *opcion) {
	cout << "MENU PRINCIPAL" << endl;
	cout << "1) Determinar el factorial de un numero" << endl;
	cout << "2) Calcular el valor de pow(e,a)" << endl;
	cout << "3) Imprime rombo" << endl;
	cout << "4) Fin" << endl;
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

double Exponencial(int *n, int *x) {

	double *exp;//Paso 1

	exp = new double;//Paso 2

	*exp = 1;

	for (int i = 0; i <= *n; i++)
	{
		*exp = *exp + ((pow(*x, i)) / (factorial(i)));

	}

	return *exp;

	delete exp;
}

void Rombo(int *n) {

	int num = 1;

	for (int j = 0; j < *n; j++)
	{
		num = 1;
		for (int i = 0; i < *n + *n - 1; i++)
		{

			if (i >= *n - 1 - j && i <= *n - 1 + j)
			{

				cout << num<<" ";
				num++;
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	
	for (int j = 0; j < *n-1; j++)
	{
		num = 1;
		for (int i = 0; i < *n + *n - 2; i++)
		{

			if (i > j && i < *n+*n-2-j )
			{

				cout << num << " ";
				num++;
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

}


/* FUNCION MAIN*/
int main()
{
	int *n = new int;// Paso 1 y 2
	int *x = new int;// Paso 1 y 2


	int *opcion = new int; //Paso 1 y 2

	do
	{
		menu(opcion); // Paso 3
		switch (*opcion) //Paso 3
		{
		case 1:

			do
			{
				cout << "Ingrese un numero positivo: ";
				cin >> *n;	//Paso 3

			} while (*n<0);
			

			cout << factorial(*n) << endl;;
			break;
		case 2:

			do
			{
			cout << "Ingrese k: ";
			cin >> *n;//Paso 3

			} while (*n < 0 || *n>20);
			
			do
			{
			cout << "Ingrese a: ";
			cin >> *x;	//Paso 3

			} while (*x < 0);
			

			cout << "Resultado: " << Exponencial(n, x) << endl;
			break;
		case 3:

			do
			{
				cout << "Ingrese un numero positivo: ";
				cin >> *n;	//Paso 3

			} while (*n <= 0 || *n>=11);

			Rombo(n);

			break;
		default:
			break;
		}

	} while (*opcion != 4);

	delete opcion; //Paso 4
	delete n; //Paso 4
	delete x; //Paso 4

	system("pause");
	return 0;
}
