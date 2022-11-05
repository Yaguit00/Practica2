/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que presenta por pantalla el numero introducido
 * en caracteres romanos.
 ******************************************************************************/
#include <iostream>
using namespace std;

/* funcion para simplificar codigo, no he sido capaz de generalizar una funcion
para todo el codigo, por lo que no he hecho para todos los casos.
*/

void hacerPalitos(unsigned i, string& palos) 
{

    while (i != 1) {
        palos = palos + "I";
        i++;
        }

}


/*
Programa interactivo que presenta por pantalla el numero introducido
en caracteres romanos.
*/

int main() {
    
    // Inicializa el valor de numeronatural, y lo pide

    int numeronatural;
    string palos = "";

    cout << "Escriba un entero entre 1 y 10: ";

    cin >> numeronatural;

     
    // Se encarga de las excepciones

    while (0 >= numeronatural || 10 < numeronatural) {

        cout << "Este no es un valor valido. Por favor introduzca otro: ";
        cin >> numeronatural;

    }

    // Caso en el que numeronatural sea menor que tres

    if (numeronatural <= 3) {
        for (int i = 0; i < numeronatural; i ++) {
            palos = palos + "I";
        }
        cout << "el numero es: " << palos;
    } 
    
        // Caso en el que numeronatural esté entre 4 y 8
    
    
    else if (numeronatural <= 5) {
        
        hacerPalitos(numeronatural - 4, palos);
        cout << "el numero es: " << palos << "V";
    }    


    
        /* 
        Caso en el que numeronatural esté entre 6 y 8,
        que es un subcaso del anterior
        */

    else if (numeronatural <= 8) {
        
        
        int i = numeronatural - 5;
        while (i > 0) {
            palos = palos + "I";
            i--;
                
        }
        
        
        cout << "el numero es: V" << palos; 

    }      
    

        // Caso en el que numeronatural está entre 9 y 10

    else {
        
        if (numeronatural < 10) {
            palos = palos + "I";
        } 
        
        cout << "el numero es: " << palos << "X"; 
    }

}





