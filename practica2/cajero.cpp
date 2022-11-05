/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que presenta por pantalla el funcionamiento de 
 * un cajero.
 ******************************************************************************/

#include <iostream>
using namespace std;

int main() {

    // Pregunta y guarda en una variable la cantidad de euros a retirar

    cout << "Cantidad a retirar en euros [positiva y múltiplo de 10]: ";
    int cantidad;
    cin >> cantidad;

    // Se ocupa de las excepciones

    while (cantidad < 0 || cantidad%10 != 0) {
        cout << "Este numero no cumple las caracteristicas, no se puede devolver esta cantidad. Por favor, introduzca otro: ";
        cin >> cantidad;
    }

    // declara las variables que respectan a los billetes

    int billetes50;
    int billetes20;
    int billetes10;

    /* 
    caso en el que la cantidad es mayor que 50, lo haremos 
    uno a uno con los restos
    */

    if (cantidad >= 50) {
        
        
        billetes50 = cantidad / 50;
        cantidad = cantidad - billetes50 * 50;

        billetes20 = cantidad / 20;
        cantidad = cantidad - billetes20 * 20;
        billetes10 = cantidad /10;

        
    /* 
    caso en el que la cantidad es mayor que 20, lo haremos 
    uno a uno con los restos empezando desde 20
    */

    }
    else if (20 <= cantidad) {

        billetes50 = 0;
        billetes20 = cantidad / 20;
        cantidad = cantidad - billetes20 * 20;
        billetes10 = cantidad / 10;


    }

    /* 
    caso en el que la cantidad es menor que 20. 
    En este caso, simplemente asumimos que el 
    billete es de 10
    */
    else {
        billetes50 = 0;
        billetes20 = 0;
        billetes10 = 1;
    }

    // Muestra el resultado por pantalla

    cout << "son " 
    << billetes50 << " billetes de 50, "
    << billetes20 << " de 20, y " 
    << billetes10 << " de 10.";

}