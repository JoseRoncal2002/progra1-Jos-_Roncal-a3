// Restriccion : N2 != 0
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N1, N2;

    cout << "Ingrese dos numeros enteros (N1 N2):"<<endl; 
	cin >> N1 >> N2;

	if (N1%N2==0)
	{
		cout << N1 << " Es multiplo de " << N2<<endl;
	}

	if (N1%N2 != 0)
	{
		cout << N1 << " No es multiplo de " << N2<<endl;
	}

	system("pause");
	return 0;
}



