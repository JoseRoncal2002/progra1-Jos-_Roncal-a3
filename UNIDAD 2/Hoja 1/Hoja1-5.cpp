// Restriciones: todos los lados deben ser mayores a 0.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int numero1, numero2,numero3;

	cout << "Ingrese los lados de un triangulo (A B C):" << endl;
	cin >> numero1>>numero2>> numero3;

	if ((numero1 > numero2-numero3 && numero1 < numero2+numero3)&& (numero2 > numero1 - numero3 && numero2 < numero1 + numero3)&& (numero3 > numero2 - numero1 && numero3 < numero2 + numero1))
	{
		cout<<"SI ES UN TRIANGULO"<<endl;
	
	}
	else
	{
		cout << "NO ES UN TRIANGULO" << endl;
	}
	
	system("pause");
	return 0;

}

