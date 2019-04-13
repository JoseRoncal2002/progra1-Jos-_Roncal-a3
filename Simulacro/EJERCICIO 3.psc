Algoritmo sin_titulo
	Escribir "Ingrese Peso:"
	Leer peso
	Escribir "Ingrese altura:"
	Leer altura
	IMC<-peso/(altura*altura)
	Si IMC<15 Entonces
		Escribir "Criterio de ingreso en el hospital"
	SiNo
		
	Fin Si
	Si IMC<=20 y IMC>=15 Entonces
		Escribir "Bajo peso"
	SiNo
		
	Fin Si
	Si IMC<=30 y IMC>20 Entonces
		Escribir "Peso normal"
	SiNo
		
	Fin Si
	Si IMC<=40 y IMC>30 Entonces
		Escribir "Sobrepeso grado 1"
	SiNo
		
	Fin Si
	Si IMC>40 Entonces
		Escribir "Sobrepeso grado 2"
	SiNo
		
	Fin Si
FinAlgoritmo
