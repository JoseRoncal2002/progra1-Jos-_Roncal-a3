Algoritmo sin_titulo
	Escribir "Ingrese sueldo:"
	Leer Sueldo
	Escribir "Ingrese a�os:"
	Leer a�os
	Si a�os<=3 Entonces
		Bono=Sueldo*0.04
	SiNo
		Si a�os>3 y a�os<=5 Entonces
			Bono=Sueldo*0.06
		SiNo
			Si a�os>5 y a�os<=10 Entonces
				Bono=Sueldo*0.10
			SiNo
				Si a�os>10 Entonces
					Bono=Sueldo*0.15
				SiNo
					Escribir "Error"
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	Escribir "El bono es:"
	Escribir Bono
	Escribir "Sueldo Total:"
	Escribir Sueldo+Bono
FinAlgoritmo
