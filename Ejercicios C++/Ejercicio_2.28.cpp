#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int numero5C = 0;
	int cifra1 = 0;
	int cifra2 = 0;
	int cifra3 = 0;
	int cifra4 = 0;
	int cifra5 = 0;
	cout << "Ingrese un numero de 5 cifras:\n";
	cin >> numero5C;
	cifra1 = numero5C / 10000;
	cifra2 = (numero5C % 10000) / 1000;
	cifra3 = ((numero5C % 10000) % 1000) / 100;
	cifra4 = (((numero5C % 10000) % 1000) % 100)/10;
	cifra5 = ((((numero5C % 10000) % 1000) % 100)%10)/1;
	cout << cifra1 <<"..."  << cifra2 << "..." << cifra3 << "..." << cifra4 << "..." << cifra5 <<  endl;
	system("pause");
	return 0;
}
