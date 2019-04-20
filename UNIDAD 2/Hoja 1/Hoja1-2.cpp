// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int pesoD, pesoE;

	cout << "Ingrese el peso del dinosaurio:" << endl;
	cin >> pesoD;
	cout << "Ingrese el peso del elefante:" << endl;
	cin >> pesoE;

	if (pesoD>pesoE)
	{
		cout << "El dinosaurio pesa mas que el elefante" << endl;
	}
	if (pesoE>pesoD)
	{
		cout << "El elefante pesa más que el dinosaurio" << endl;
	}

	system("pause");
    return 0;
}

