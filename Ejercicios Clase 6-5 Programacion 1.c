#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  stringiguales();
  return 0;
}

int promedios(){
    char nombre[10];
    char apellido[10];
    float num1,num2,num3,prom;
    puts("ingrese el nombre del alumno: ");
    gets(nombre);
    puts("ingrese el apellido del alumno:  ");
    gets(apellido);

    printf("ingresa la primera nota");
    scanf("%f",&num1);
    printf("ingresa la segunda nota");
    scanf("%f",&num2);
    printf("ingresa la tercera nota");
    scanf("%f",&num3);

    prom = (num1+num2+num3) / 3;
    printf("\nEl promedio de %s %s es: %f", nombre,apellido,prom);

    if(prom >= 6){
        printf("\nAprobo!!");
    }else{
        printf("\nNo Aprobo");
    }
    return 0;
}

// leer dos cadenas, si son iguales en longitud decir que son iguales en longitud, si son iguales en contenido decir eso

int stringiguales(){
    char palabra1[10];
    char palabra2[10];

    puts("ingresa una palabra");
    gets(palabra1);
    puts("ingresa otra palabra");
    gets(palabra2);

    if(strcmp(palabra1,palabra2)==0){
            printf("las palabras son iguales");
    }else{
        if(strlen(palabra1) == strlen(palabra2)){
            printf("tienen el mismo largo");
        }else{
            printf("no son iguales ni tienen el mismo largo");
        }
    }
    return 0;
}
