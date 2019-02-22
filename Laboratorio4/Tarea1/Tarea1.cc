<<<<<<< HEAD
#include <iostream>
void porValor(int valor){

    valor = 42;

}

void porReferencia(int& valor){

    valor = 42;

}

int main(){
// El valor1 tiene una funcion que recibe un sola copia de su valor que tiene, y no se puede modificar.
// de lo contrario que el valor2 pasa de la posicion de memoria donde se guardo su variable, po lo que la
// función sabe que el valor va a valer 42 o poderlo modificar de otra manera. 
    int valor1 = 0;

    int valor2 = 0;

    porValor(valor1);

    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);

    printf("El resultado por referencia es %i\n", valor2);

=======
#include <iostream>
void porValor(int valor){

    valor = 42;

}

void porReferencia(int& valor){

    valor = 42;

}

int main(){
// El valor1 tiene una funcion que recibe un sola copia de su valor que tiene, y no se puede modificar.
// de lo contrario que el valor2 pasa de la posicion de memoria donde se guardo su variable, po lo que la
// función sabe que el valor va a valer 42 o poderlo modificar de otra manera. 
    int valor1 = 0;

    int valor2 = 0;

    porValor(valor1);

    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);

    printf("El resultado por referencia es %i\n", valor2);

>>>>>>> fa1ba048931e4c45ff891a5d2ea0d8bc5ccdaa6d
}