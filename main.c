#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int seguimos,enviar,num,esN,nop;

    // Primera version con numero aleatorio y verificando
    srand(time(NULL));
    do {
       // genero un numero aleatorio y hago que puede ser positivo o negativo
       enviar = ((rand() % 99998 - 9999) + 1 ) + 9999;
       nop = rand() % 2;
       if(nop == 1 ){ enviar *= -1;}
       // muestro el numero
       printf("El numero aleatorio generado es: %d \n", enviar);
       // convierto el numero generado a positivo para que las cuentas funcionen y dejo un valor que se acuerde de si es negativo o positivo el numero original
       if(enviar < 0){ enviar *= -1;  esN = 1;} else {esN = 0;}
       // valido si es un numero de 5 cifras si no lo es entramos de vuelta al loop
       seguimos = validar(enviar);
    } while(seguimos == 0);


    // mostramos la suma, la funcion de sumar recibe 2 parametros, el numero a sumar y si es positivo o negativo//
    num = sumaDigitos(enviar, esN);
    printf("la suma de sus digitos es: %d \n", num);

    printf("|----------------------------------------------------------|\n");


    // ----------------------------------------------- //
    // Poniendo el numero y verificando
    // ----------------------------------------------- //


    do {
        // el usuario pone un numero
        printf("Ingrese un numero de 5 cifras \n");
        scanf("%d", &enviar);
        // convierto el numero del usuario a positivo para que las cuentas funcionen y dejo un valor que se acuerde de si es negativo o positivo el numero original
        if(enviar < 0){ enviar *= -1;  esN = 1;} else {esN = 0;}
        seguimos = validar(enviar);
         // valido si es un numero de 5 cifras si no lo es entramos de vuelta al loop
    } while(seguimos == 0);


    // mostramos la suma, la funcion de sumar recibe 2 parametros, el numero a sumar y si es positivo o negativo//
    num = sumaDigitos(enviar,esN);
    printf("la suma de sus digitos es: %d", num);

}

void esParP(int unNumero){
    if((unNumero%2)==0){
        printf("es par");
    }else{
        printf("no es par");
    }
}

int esParI(int unNumero){
    if((unNumero%2)==0){
        return 1;
    }else{
        return 0;
    }
}

char esParC(int unNumero){
  if((unNumero%2)==0){
        return "es par";
    }else{
        return "no es par";
    }
}

int sumaDigitos(int num, int esN){
    int aux;
    int resultado = 0;
    char cadena[10];
    sprintf(cadena, "%d", num);
    for(int x = 0; x < strlen(cadena); x++){
        aux = cadena[x] - '0';
        resultado += aux;
    }
    if(esN == 1) {return resultado * -1;} else { return resultado;};
}

int validar(int num){
    if(num < 10000 || num > 99999){
        printf("el numero no es de 5 cifras\n");
        return 0;

    }else{
       printf("el numero es de 5 cifras \n");
       return 1;
    }
}
