#include "Vehiculo.hh"
#include "Vector2d.hh"
#include <string>

Vehiculo::Vehiculo() : Velocidad(0,0), Posicion(0,0){}

Vector2d Vehiculo::getVelocidad(){
   return Velocidad;
}

Vector2d Vehiculo::getPosicion(){
   return Posicion;
}

 std::string Vehiculo::to_string() {
   std::string val1 = Velocidad.to_string();
    std::string val2 = Posicion.to_string();
    std::string val3 = std::string("Velocidad:") + std::string(val1) + std::string(", Posicion:") + std::string(val2);
    return val3;
}

void Vehiculo::aceleracion(Vector2d a, float t){
   Velocidad.x = Velocidad.x + a.x * t;
   Velocidad.y = Velocidad.y + a.y * t;
   Posicion.x = Posicion.x + Velocidad.x * t;
   Posicion.y = Posicion.y + Velocidad.y* t;
}

void Vehiculo::avanzar(float t){
   Posicion.x = Posicion.x + Velocidad.x * t;
   Posicion.y = Posicion.y + Velocidad.y * t;
}