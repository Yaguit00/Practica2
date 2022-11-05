/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que aproxima pi usando el metodo de Montecarlo
 ******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
const float maximo = RAND_MAX;


// Uso la funcion calcular distancia, hecha en un ejercicio anterior

float calcularDistancia(float b, float d) {
    
    return(sqrt(pow(0.5 - b, 2)+pow(0.5 - d ,2)));

}

int main () {

    // asumo una circunferencia de radio = 1/2, que es tangente a ambos ejes de coordenadas. Podria ser contenido en un cuadrado de 1x1
    float radio = 0.5;
    
    unsigned sumador = 0;

    // declarar cuantos puntos voy a usar y pedir al usuario
    float puntos;
    cout << "Introduzca el número de puntos para la aproximación: ";
    cin >> puntos;

    // hacer un bucle que, para este numero de puntos, haga random en el cuadrado
    // posibilidad de que entre en el circulo es 79%
    unsigned i = 0;
    while (i < puntos) {
        
        if (calcularDistancia( (float(rand() / maximo)),(float(rand() / maximo) ))  <= radio) {
            
            sumador++;

        }

        i++;
    }

    /* Devuelvo la cantidad, que es los que hay dentro del circulo (distancia menor
    que radio) * 4, partido del numero total de puntos
    */

cout << "Pi se aproxima a: " << float(sumador * 4) / puntos;
}