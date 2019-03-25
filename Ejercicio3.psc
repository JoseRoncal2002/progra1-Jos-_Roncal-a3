Algoritmo sin_titulo
	Leer H
	Leer M
	Leer S
	NuevaH<-S+1
	Si NuevaH>=60 Entonces
		NuevaH=0
		M=M+1
		Si M>=60 Entonces
			M=0
			H=H+1
		SiNo
			M=M
		Fin Si
	SiNo
		NuevaH=NuevaH
	Fin Si
	Escribir H
	Escribir M
	Escribir NuevaH
FinAlgoritmo
