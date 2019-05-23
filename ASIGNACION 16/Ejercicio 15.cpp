#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;

int Factorial(int N)
{
	int resultado=1;
	

	while (N>0)
	{
		resultado = resultado*N;
		N = N--;
	}

	return resultado;
}


int main()
{
	int N;
	int K;
	int combinatorio;

	cout << "Ingrese N: " << endl;
	cin >> N;
	cout << "Ingrese K" << endl;
	cin >> K;

	combinatorio = (Factorial(N)) / (Factorial(K)*Factorial(N - K));
	
	cout << "Combinatorio: " << combinatorio << endl;

	_getch();
}
