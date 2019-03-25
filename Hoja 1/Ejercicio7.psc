Algoritmo sin_titulo
	Leer HorasT
	Leer TarifaH
	SueldoB<-HorasT*TarifaH
	Bonificación<-SueldoB*18/100
	SueldoBruto<-SueldoB+Bonificación
	Descuento<-SueldoBruto*12/100
	SueldoNeto<-SueldoBruto-Descuento
	Escribir SueldoB
	Escribir SueldoBruto
	Escribir SueldoNeto
	
	
FinAlgoritmo
