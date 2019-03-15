#include <iostream>
#include "Vector2d.hh"
#include "Vehiculo.hh"
#include <string>

int main(){
    Vehiculo carro;
    carro.aceleracion(Vector2d(3,1), 5);
    carro.avanzar(10);
    std::string valor = carro.to_string();
    printf("%s\n", valor.c_str());
    carro.aceleracion(Vector2d(-7.2, 8), 4);
    carro.avanzar(9);
    std::string valor2 = carro.to_string();
    printf("%s\n", valor2.c_str());

}