/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autor: Yago Torres Garcia
 * Última revisión: 20 de octubre de 2022
 * Resumen: Programa interactivo que presenta por pantalla fechas en un formato 
 * distinto al formato presentado por el usuario
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/*
Programa que recibe una fecha en formato aaaammdd y devuelve el año, mes y día y 
devuelve los mismos con un formato más legible
*/ 


int main() {

// Pide la fecha y la recibe

cout << "Escriba una fecha con formato de 8 cifras [aaaammdd]: ";
int fecha;
cin >> fecha;

// Creo una manera de que, si es negativo, vuelva a pedirlo

while (fecha < 0) {
    cout << "Esa fecha no es valida, introduzca otra: ";
    cin >> fecha;
}

// Declarao las variables y les asigno int, ya que en teoria solo me llegan valores validos.

int ano;
int mes;
int dia;

// Con ayuda de los restos, consigo los valores de año, mes y día

ano = fecha / 10000;
mes = ( fecha - 10000 * ano ) / 100;
dia = ( fecha - 10000 * ano ) - (100 * mes);

// Devuelvo los valores en el formato adecuado

cout << setw(2) << setfill('0') << dia << '/'
<< setprecision(0) << setw(2) << setfill('0') << mes << '/' 
<< setprecision(0) << ano << endl;

return 0;

}

