/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
* Última revisión: 20 de octubre de 2022
* Resumen: Programa que pide unos grados, minutos y segundos, y los devuelve como 
*una cantidad de radianes, y devuelve seno, coseno y tangente.
******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
Programa que pide unos grados, minutos y segundos, y los devuelve como 
una cantidad de radianes, y devuelve seno, coseno y tangente.
*/

// Para los casos negativos y mayores que 360 usaré funciones

void negativogrados(float a) {

    while (a >= 360){
    a = a - 360;
} 
}

void mayorque360grados(float a) {

    while (a < 0) {
    a = a + 360;

}
}

void negativo(float a) {

    while (a >= 360) {
    a = a - 60;
} 
}

void mayorque360(float a) {

    while (a < 0) {
    a = a + 60;

}
}



int main() {

float grados, minutos, segundos;
cout << "Escriba el valor de un ángulo (grados, minutos y segundos): ";
cin >> grados >> minutos >> segundos;

// Se encarga de casos negativos

negativogrados(grados);
    
mayorque360grados(grados);

negativo(minutos);

mayorque360(minutos);

negativo(segundos); 

mayorque360(segundos);

/*
 Grados + (Minutos + Segundos/60)/60, y todo esto por pi / 180
 Utilizo las funciones sin, cos y division de los mismos para
 conseguir la tangente.
*/

float radianes = (grados + (minutos + segundos/60)/60) * M_PI / 180;
cout << "Valor del angulo en radianes: " << fixed << setprecision(3) << radianes << " radianes" << endl;   
cout << "sen " << radianes << " = " << sin(radianes) << endl;
cout << "cos " << radianes << " = " << cos(radianes) << endl;
cout << "tg " << radianes << " = " << setprecision(4) << sin(radianes) / cos(radianes) << endl;

}