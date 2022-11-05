/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que presenta por pantalla valor en euros y 
 * centimos, asi como en pesetas, el valor de un número introducido por el
 * usuario.
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*
Programa que recibe una cantidad en euros y la devuelve en pesetas, mostrando 
tambien los centimos
*/

int main() {

    // Pedir cantiodad de dinero y declarar tanto dinero, euros y centimos

    cout << "Escriba una cantidad no negativa de dinero en euros: ";
    float dinero;
    cin >> dinero;

    // Se encarga de los valores negativos de dinero

    while (dinero < 0) {

        cout << "Escriba un valor no negativo, por favor: ";
        cin >> dinero;

    }

    float centimos;

    /* Calcular los centimos, caso especial (no he sido capaz de solucionar sin
    el uso de ese if) y pesetas
    */

    centimos = dinero * 1000 - 1000 * (int(dinero));

    if (centimos == 100 && dinero == 0) {
        dinero = dinero + 1;
        centimos = centimos - 100;

        cout << "Son " 
        << int(dinero) << " euros y " 
        << fixed << setprecision(0) << centimos/10 << " centimos que equivalen a "
        <<  float((dinero-1) * 166.386) << " pesetas.";
    }

    /* Mostrar la cantidad de dinero, transformandolo en el mismo "cout" en
    cantidad de pesetas
    */
   else {
        cout << "Son " 
        << int(dinero) << " euros y " 
        << fixed << setprecision(0) << centimos/10 << " centimos que equivalen a "
        <<  float(dinero * 166.386) << " pesetas.";
    }
}