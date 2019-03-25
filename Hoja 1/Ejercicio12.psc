Algoritmo sin_titulo
	Escribir "Ingresar Nota"
	Leer Nota
	Si Nota<12.50 Entonces
		Escribir "Desaprobado"
	SiNo
		Si Nota>=12.50 y Nota<=20 Entonces
			Escribir "Aprobado"
		SiNo
			Escribir "Número no Valido"
		Fin Si
	Fin Si
FinAlgoritmo
