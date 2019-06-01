// ConsoleApplication122.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int sumdigit(int *num) {

	int extNum, sumDigit = 0;
	int divisible=0;

	for (int i = 0; i < 10; i++)
	{
		while (num[i] != 0) {
			extNum = num[i] % 10;
			num[i] = num[i] /10;
			sumDigit = sumDigit+extNum;
		}
		if (sumDigit%3==0)
		{
			divisible++;
		}
	}

	return divisible;
}

int main()
{
	int *num;
	num = new int[10];

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		num[i] = 1 + rand() % (201-1);
	}

	cout << "Datos del Vector " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl;
	}

	cout <<"Hay "<< sumdigit(num)<<" datos divisibles entre 3" << endl;

	delete num;
	_getch();
}




