Algoritmo sin_titulo
	Escribir "Ingrese sueldo:"
	Leer Sueldo
	Escribir "Ingrese años:"
	Leer años
	Si años<=3 Entonces
		Bono=Sueldo*0.04
	SiNo
		Si años>3 y años<=5 Entonces
			Bono=Sueldo*0.06
		SiNo
			Si años>5 y años<=10 Entonces
				Bono=Sueldo*0.10
			SiNo
				Si años>10 Entonces
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
