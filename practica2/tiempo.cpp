/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que presenta por pantalla el tiempo en medida
 * natural tras ser recibido en segundos
 ******************************************************************************/

#include <iostream>
using namespace std;

/*
Programa interactivo que presenta por pantalla el tiempo en medida
natural tras ser recibido en segundos
*/

/* Como tengo que hacer los plurales de varios elementos, hare una funcion.
   Esta función se trata de un void (no quiero return) y hara un cout de s,
   siempre que la "a", es decir, el parametro que le ponga, sea distinto de
   1
*/

/*
Pre: 
Post: Devuelve una s siempre que el número introducido sea distinto de 1
*/

void plural(int a) {

    if(a != 1) {
        cout << 's';
    }
    
    
}

int main () {

    // Muestra en pantalla la petición del tiempo

    cout << "Duración del evento en segundos: ";

    /*
    Declaro las variables sin darles un valor, ya que las voy a 
    calcular y darles un valor, por lo que no es necesario darles 
    un valor. Pido un valor para "total".
    */

    int total;
    int horas;
    int minutos;
    int segundos;

    cin >> total;
    
    // Caso en el que el total es mayor a una hora.

    if (total >= 3600) {
        
        horas = total / 3600;
        total = total - horas * 3600;
        minutos = total / 60;
        segundos = total - (minutos * 60);

    } 

    // Caso en el que no hay horas, solo minutos y segundos

    else if (60 <= total < 3600) {
         horas = 0;
         minutos = total / 60;
         segundos = total - (minutos * 60);
    }

    // Caso en el que solo hay segundos

    else {
        horas = 0;
        minutos = 0;
        segundos = total;
    }

    // Comenzamos el cout, mostrando el total equiv... y la hora

    cout << "el total equivale a " 
    << horas << " hora";

    // Comprobamos si las horas son más de una, para poner el plural

    plural(horas);

    // Seguimos con el cout, y hacemos lo mismo con los minutos en plural

    cout << " con " 
    << minutos << " minuto";
    
    // Comprobación de si los minutos son varios, para el plural

    plural(minutos);

    // Seguimos co el cout, y haré lo mismo con los segundos

    cout << " y "
    << segundos << " segundo";

    // comprobaremos si hay más de un segundo para el plural

    plural(segundos);

    // Mostraremos un punto final, sea plural o no los segundos

    cout << ".";

    return 0;

}
