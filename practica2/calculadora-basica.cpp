/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que hace la funcion de una calculadora simple
 ******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

// Programa interactivo que hace la funcion de una calculadora simple

// Funciones que realiza la calculadora

void sumar(char a, int b, int c){

    cout << b << " " << a << " " << c << " = " << b + c << endl;    

}

void restar (char a, int b, int c) {

    cout << b << " " << a << " " << c << " = " << b - c << endl;

}

void multiplicar(char a, int b, int c){

    cout << b << " " << a << " " << c << " = " << b * c << endl;

}

void dividir (char a, int b, int c) {

    cout << b << " " << a << " " << c << " = " << b / c << endl;

}

void resto(char a, int b, int c){

    cout << b << " " << a << " " << c << " = " << b % c << endl;

}

void elevar (char a, int b, int c) {

    cout << b << " " << a << " " << c << " = " << pow(b, c) << endl;

}



int main () {

    // Pide al usuario la operación, guardando los valores introducidos

    cout << "Escriba una operación entre enteros: ";
    int numero1, numero2;
    char operador;
    cin >> numero1 >> operador >> numero2;

    /* Exceptuando si el primero es 0 (que es el fin), procede a las
    operaciones, que se harán con funciones por ser repetitivas 
    */

    while (numero1 != 0) {
        if (operador == '+') {
            sumar('+', numero1, numero2);
        }
        else if (operador == '-') {
            restar('-', numero1, numero2);
        }
        else if (operador == '*') {
            multiplicar('*', numero1, numero2);
        }
        else if (operador == '/') {
            dividir('/', numero1, numero2);
        }
        else if (operador == '%') {
            resto('%', numero1, numero2);
        }
        else if (operador == '^') {
            elevar('^', numero1, numero2);
        }

        // Muestra al usuario su solución, pidiendo otra vez valores

        cout << "Escriba otra operacion entre enteros: ";
        cin >> numero1 >> operador >> numero2;
    }
        
    return 0;
}