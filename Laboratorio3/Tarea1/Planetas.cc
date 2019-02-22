#include <iostream>

using namespace std;

int main(){
    char x;
    
    float tiempo;
    float gravedad;
    float resistencia;
    
    float distancia;
    float velocidad;
    float aceleracion;
    float fatm;
    float fuerza;
    float vor;
    
    int bandera = 1;
    while (bandera == 1){
        int banderat = 1;
        float tiempo2 = 0;
        printf("Ingrese el caracter del cuerpo celeste \n");
        cin >> x;
        if (x == 't' || x == 'v' || x == 'l' || x == 'c'){
            while (banderat == 1){
                printf("Ingrese el tiempo de caida en segundos\n");
                cin >> tiempo;
                if (tiempo > 0){
                    switch(x) {
                        case 't':
                            gravedad = 9.8;
                            resistencia = 0.0023;
                            break;     
                        case 'v': 
                            gravedad = 8.87;
                            resistencia = 0.0023;
                            break;
                        case 'l':   
                            gravedad = 1.62;
                            resistencia = 0;
                            break;
                        case 'c':   
                            gravedad = 1.23;
                            resistencia = 0;
                            break;
                    }
                    printf ("La gravedad es de: %f ", gravedad);
                    printf ("y la resistencia es de: %f\n", resistencia);
                    while (tiempo2 <= tiempo){
                        fatm = resistencia*(pow(vor,2));
                        fuerza = gravedad - fatm;
                        velocidad = velocidad + (fuerza*(0.01));
                        distancia = distancia + (velocidad*0.01);
                        vor = velocidad; 
                        tiempo2 += 0.01;
                    }
                    printf ("La distancia total recorrida es de: %f\n", distancia);
                    printf ("La velocidad final es de: %f\n", velocidad);
                    banderat = 0;
                }
                else{
                    printf("No se pueden ingresar valores negativos\n");
                    banderat = 1;
                }
            
            }
        }
        else {
            printf("El caracter ingresado no equivale a ningun cuerpo celeste! \n");
            printf("Presiona s para salir, o cualquier otra letra para seguir \n");
            char salir;
            cin >> salir;
            if (salir != 's'){
                bandera = 1;
            }
            else{
                bandera = 0;
                printf("salida");
            }
        }    
    }
}