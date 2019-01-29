#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;
    int resultado;
    //Prueba No.1
    valor1 = 1,
    valor2 = 1,
    //Ninguno de los valores se aumenta, y el resultado es correcto
    resultado = valor1 + valor2;
    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
    
    //Prueba No.2
    valor1 = 1,
    valor2 = 1,
    resultado = ++valor1 + valor2;
    //Se aumenta el valor1 y luego se hace la suma junto al valor2 , que nunca se aumenta
    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
    
    //Prueba No.3
    valor1 = 1,
    valor2 = 1,
    //El valor1 no se aumenta, luego se hace la suma sin el valor2 aumentado, y luego se aumenta el valor2
    resultado = valor1 + valor2++;
    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
    
    //Prueba No.4
    valor1 = 1,
    valor2 = 1,
    //Aumenta valor1, y luego se hace la suma con el valor2 sin haberse aumentado, y luego se aumenta
    resultado = ++valor1 + valor2++;
    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);
    
}