/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que devuelve la distancia entre dos puntos en 
 * un plano
 ******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

/*
* Programa interactivo que devuelve la distancia entre dos puntos en 
* un plano
*/

int main () {

    // Pide valores de los puntos 1 y 2, y lo guarda como float

    float coordxpunto1, coordypunto1, coordxpunto2, coordypunto2;
    cout << "Introduzca las coordenadas de un punto: ";
    cin >> coordxpunto1 >> coordypunto1;

    cout << "Introduzca las coordenadas de otro punto: ";
    cin >> coordxpunto2 >> coordypunto2;

    // Devuelve la distancia, calculandola como raiz cuadrada de suma de cuadrados

    cout << "La distancia entre los puntos es de " 
    << sqrt(pow(coordxpunto2 - coordxpunto1, 2)+pow(coordypunto2 - coordypunto1 ,2)) 
    << " unidades";

}