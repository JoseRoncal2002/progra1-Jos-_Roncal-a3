Algoritmo sin_titulo
	Leer Horas
	Leer Sueldo
	SueldoB<-Horas*Sueldo
	DescuentoEs<-SueldoB*9/100
	DescuentoAFP<-SueldoB*11.5/100
	DescuentoT<-DescuentoEs+DescuentoAFP
	SueldoN<-SueldoB-DescuentoT
	Escribir SueldoB
	Escribir DescuentoEs
	Escribir DescuentoAFP
	Escribir SueldoN
FinAlgoritmo
