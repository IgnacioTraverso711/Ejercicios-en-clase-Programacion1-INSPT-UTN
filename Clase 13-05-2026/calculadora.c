#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Consigna: hacer una calculadora, implementar switch

int main()
{
    int numero1, numero2, resultado;
    char respuesta = ' ';

    printf("Bienvenido a la calculadora, ingrese una operacion que quiera hacer \n s = SUMA, r = RESTA, m = MULTIPLICACION, d = DIVISION\n");
    scanf(" %c", &respuesta);
    printf("ingresa un numero\n");
    scanf(" %d", &numero1);
    printf("ingresa otro numero\n");
    scanf(" %d", &numero2);


    switch(respuesta){
        case 's':
            resultado = numero1 + numero2;
            printf("la suma de %d y %d es %d: ",numero1,numero2,resultado);
            break;
        case 'r':
            resultado = numero1 - numero2;
            printf("la resta de %d y %d es %d: ",numero1,numero2,resultado);
            break;
        case 'm':
            resultado = numero1 * numero2;
            printf("la multiplicacion de %d y %d es %d: ",numero1,numero2,resultado);
            break;
        case 'd':
            if(numero2 == 0){
                printf("No se puede dividir por 0");
                break;
            }else{
                resultado = numero1 / numero2;
                printf("la division de %d y %d es %d: ",numero1,numero2,resultado);
                break;
            }
    }



}
