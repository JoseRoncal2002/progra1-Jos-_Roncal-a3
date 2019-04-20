// ConsoleApplication51.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string anio;
	string bisiesto,aniosub;
	int anioint, numero;
	int  mes;

	cout << "Ingrese mes:"<<endl;
   cin >> mes;
   cout << "Ingrese anio:"<<endl;
   cin >> anio;
	
   
	anioint = int(stoi(anio));
	bisiesto = (anio.substr(2, 2));
	numero = int(stoi(bisiesto));

   

   if (mes == 1)
   {
	   cout << "31 dias" << endl;
   }

   if (mes == 2)
   {
	   if ((numero!=00 && anioint%4==0) || (numero==00 && anioint%400==0))
	   {
		   cout << "29 dias" << endl;
	   }
	   else
	   {
		   cout << "28 dias" << endl;
	   }
	   
   }

   if (mes ==3)
   {
	   cout << "31 dias" << endl;
   }

   if (mes == 4)
   {
	   cout << "30 dias" << endl;
   }

   if (mes == 5)
   {
	   cout << "31 dias" << endl;
   }

   if (mes == 6)
   {
	   cout << "30 dias" << endl;
   }

   if (mes == 7)
   {
	   cout << "31 dias" << endl;
   }

   if (mes == 8)
   {
	   cout << "31 dias" << endl;
   }

   if (mes == 9)
   {
	   cout << "30 dias" << endl;
   }

   if (mes == 10)
   {
	   cout << "31 dias" << endl;
   }

   if (mes == 11)
   {
	   cout << "30 dias" << endl;
   }

   if (mes == 12)
   {
	   cout << "31 dias" << endl;
   }

   system("pause");
   return 0;
}


