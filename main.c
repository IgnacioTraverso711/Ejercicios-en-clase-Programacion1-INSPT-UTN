#include <stdio.h>
#include <stdlib.h>
#define cant 7
int main()
{
    int legajos[cant] = {1234,2345,6789,2345,8976,3456,1734};
    int Notas[cant]={2,6,9,10,3,1,5};
    int max,indice;
    //int largo = sizeof(Notas)/sizeof(Notas[0]);
    max = Notas[0];
    for (int i = 0; i < cant ;i++){
        if(max < Notas[i]){
            max = Notas[i];
            indice = i;
        }
    }
    printf("La nota maxima es %d y pertenece al legajo: %d", max, legajos[indice]);

}

void temperatura(){
  int i;
    int max;
    int Temperaturas[12];
    //lleno
    for(i = 0; i < 12; i++){
        scanf("%d", &Temperaturas[i]);
    }

    // muestro
    for(i = 0; i < 12; i++){
        printf("El promedio del mes %d es %d\n", (i+1) ,Temperaturas[i]);
    }

    // saco maximo
    max = Temperaturas[0];
    for(i = 0; i < 12; i++){
        if(max < Temperaturas[i]){
            max = Temperaturas[i];
        }
    }

    //muestro maximo
    printf("El maximo es %d", max);
}
