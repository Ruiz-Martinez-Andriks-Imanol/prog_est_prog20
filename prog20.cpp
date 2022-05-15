/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 03/03/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de  funciones en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -Funciones
    -Prototipos
    -El uso de include para las librerias
    -Operaciones habilitadas por math.h
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<math.h>
//Prototipos
float calcularArea(float a, float b, float c);
//main
int main(){
	//Declaración de variables
	float x,y,z, a;
	//Proceso
	printf("Introudce el primer lado del triangulo: ");
	scanf("%f",&x);
	printf("Introduce el segundo lado del triangulo: ");
	scanf("%f",&y);
	printf("Introduce el ultimo lado del triangulo: ");
	scanf("%f",&z);
	a=calcularArea(x,y,z);
	//Salida
	printf("El area es %.2f", a);
	printf("\n El area de un triangulo que mide en sus lados: 5, 3, 7 es %.2f", calcularArea(5,3,7));
	return 0;
}	
//Funciones
float calcularArea(float a, float b, float c) {
	float s, area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
