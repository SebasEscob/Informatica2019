#include <iostream>

int main(){
    //Declaracion de tipos
    int nempleados = 5; //Nunca habran medios empleados
    const float salario = 110.5; //Se mantiene un sueldo fijo (hasta ser cambiado por la empresa) y puede tener decimales
    float sueldototal; //Una de las variables de su operacion es un float
    float impuesto; //Porque el impuesto siempre lleva decimales (al ser una tasa de interes cambiante)
    float totalimpuesto; //Se hace una operacion con impuesto
    
    //Operaciones
    impuesto = 0.1;
    sueldototal = salario * nempleados;
    totalimpuesto = sueldototal * impuesto;
    
    //Sueldo 5 empleados
    std::printf ("Sueldo Total = %f", sueldototal);
    std::printf ("  Total Impuesto= %f", totalimpuesto);
    
    //Aumento de sueldo
    nempleados++;
    nempleados++;
    nempleados++;
    
    //Operacion aumento
    sueldototal = salario * nempleados;
    impuesto = 0.1;
    totalimpuesto = sueldototal * impuesto;
    
    //Sueldo con aumento
    std::printf ("Sueldo Total = %f", sueldototal);
    std::printf ("  Total Impuesto= %f", totalimpuesto);
}