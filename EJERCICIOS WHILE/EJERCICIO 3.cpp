#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int b = 1;
	int n,a;
	int suma = 0;

	cout << "Ingrese n:" << endl;
	cin >> n;
	cout << "Ingrese a:" << endl;
	cin >> a;

	if (n < 0 || a < 0)
	{
		cout << "ERROR INGRESE OTRO VALOR" << endl;


	}
	else
	{
		while (i <= n)
		{
			suma = suma + a * (b);
			b = 2 * i;
			i++;
		}

		cout << "Suma:" << suma << endl;
	}
	system("pause");
	return 0;
}