Algoritmo sin_titulo
	Leer Valor1
	Leer Valor2
	Leer Valor3
	Si Valor1>Valor2 y Valor1>Valor3 Entonces
		MayorV<-Valor1
		
	SiNo
		Si Valor2>Valor1 y Valor2>Valor3 Entonces
			MayorV<-Valor2
		SiNo
			MayorV<-Valor3
		Fin Si
	Fin Si

	Si Valor1<Valor2 y Valor1<Valor3 Entonces
		MenorV<-Valor1
	SiNo
		Si Valor2<Valor1 y Valor2<Valor3 Entonces
			MenorV<-Valor2
		SiNo
			MenorV<-Valor3
		Fin Si
	Fin Si
	Si (Valor1>Valor2 y Valor1<Valor3) o (Valor1>Valor3 y Valor1<Valor2) Entonces
		ValorMedio<-Valor1
	SiNo
		Si (Valor2>Valor1 y Valor2<Valor3) o (Valor2>Valor3 y Valor2<Valor1) Entonces
			ValorMedio<-Valor2
		SiNo
			ValorMedio<-Valor3
		Fin Si
	Fin Si

	Escribir MayorV
	Escribir ValorMedio
	Escribir MenorV
FinAlgoritmo
