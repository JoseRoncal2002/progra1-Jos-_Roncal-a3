

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int posicion;

	cout << "Ingrese la posicion del equipo en la tabla: "<<endl; 
   cin >> posicion;

   if (posicion<=4)
   {
	   cout << "El equipo seleccionado ira al mundial !!!" << endl;

   }

   if (posicion == 5)
   {
	   cout << "El equipo seleccionado ira al repechaje !!!" << endl;

   }

   if (posicion > 5)
   {
	   cout << "Comprate una TV LED para ver el mundial !!!" << endl;

   }

   system("pause");
   return 0;
}


