#include <stdio.h>
#include <stdlib.h>
//un algoritmo que lee dos numeros y muestra la suma
// funcion mensaje
// funcion ingreso
// funcion suma
// funcion salida
int n1,n2;

int main()
{
    mensaje();
    ingreso();
    salida(suma(n1,n2));
}

void mensaje(){
    printf("Ingrese dos numeros y le muestro la suma de ambos\n");
}

void ingreso(){
    printf("Ingrese primer numero\n");
    scanf(" %d", &n1);
    printf("Ingrese segundo numero\n");
    scanf(" %d", &n2);
}

int suma(numero1,numero2){
    int resultado = numero1 + numero2;
    return resultado;
}

void salida(resultado){
    printf("el resultado de la suma de ambos numeros es: %d", resultado);
}
