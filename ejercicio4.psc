Algoritmo sin_titulo
	Leer Radial
	Grados<-Radial*(180/PI)
	Minutos<-(Grados-TRUNC(Grados))*60
	S<-(Minutos-TRUNC(Minutos))*60
	Escribir TRUNC(Grados)
	Escribir TRUNC(Minutos)
	Escribir TRUNC(S)
FinAlgoritmo
