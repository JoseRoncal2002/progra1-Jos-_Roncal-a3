#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int n;
	int suma = 0;

	cout << "Ingrese n:" << endl;
	cin >> n;

	if (n < 0 || a < 0)
	{
		cout << "ERROR INGRESE OTRO VALOR" << endl;


	}
	else
	{
		while (a <= n)
		{
			suma = suma +a*a;
			a++;
		}

		cout << "Suma:" << suma << endl;
	}
	system("pause");
	return 0;
}


