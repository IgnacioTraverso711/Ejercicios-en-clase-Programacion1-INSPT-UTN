#include <stdio.h>
#include <stdlib.h>


int Caja1[2][100];
int Caja2[2][100];
int Caja3[2][100];
int Caja4[2][100];
int Caja5[2][100];
int indiceActual = 0;
char eleccion;
int cajaElegida, cajeroELegido, importeElegido;

int main(){
    ejercicioMatrizImprimir();
    do{
        printf("Quiere ingresar una venta? S o N \n");
        scanf(" %c", &eleccion);
        if(eleccion == 'S' || eleccion == 's'){
           do{
               printf("Ingresar que caja es: \n");
               scanf(" %d", &cajaElegida);
               printf("Ingresar que cajero es: \n");
               scanf(" %d", &cajeroELegido);
               printf("Ingresar el importe\n");
               scanf(" %d", &importeElegido);
               if(cajaElegida > 5 || cajaElegida < 1){
                    printf("Esa caja no existe, vuelva a ");
               }else{
                    ingresarImporte(importeElegido,cajeroELegido,cajaElegida);
               }
           }while(cajaElegida > 5 || cajaElegida < 1);
        }else{
           printf("Chau chau\n");
        }
    }while(eleccion == 'S' || eleccion == 's');


   printf(" %d\n", totalFactCaja(1));
   printf(" %d\n", totalFactCajero(2));
   printf(" %d\n",  cantPersonasAtendidasPorCaja(1));
   cajaEspecifica(1);

}

void ingresarImporte(int importe, int cajero, int caja){
        switch (caja){
            case 1:
                Caja1[0][indiceActual] = importe;
                Caja1[1][indiceActual] = cajero;
                indiceActual ++;
                break;
            case 2:
                Caja2[0][indiceActual] = importe;
                Caja2[1][indiceActual] = cajero;
                indiceActual ++;
                break;
            case 3:
                Caja3[0][indiceActual] = importe;
                Caja3[1][indiceActual] = cajero;
                indiceActual ++;
                break;
            case 4:
                Caja4[0][indiceActual] = importe;
                Caja4[1][indiceActual] = cajero;
                indiceActual ++;
                break;
            case 5:
                Caja5[0][indiceActual] = importe;
                Caja5[1][indiceActual] = cajero;
                indiceActual ++;
                break;
            default:
                printf("no existe esa caja\n");
        }
}

int totalFactCaja(int caja){
    int aux = 0;
    for(int i = 0; i <= 99; i++){
        switch (caja){
            case 1:
                aux = aux + Caja1[0][i];
                break;
            case 2:
                aux = aux + Caja2[0][i];
                break;
            case 3:
                aux = aux + Caja3[0][i];
                break;
            case 4:
                aux = aux + Caja4[0][i];
                break;
            case 5:
                aux = aux + Caja5[0][i];
                break;
        }
    }

    return aux;
}

int totalFactCajero(int cajero){
    int aux = 0;
    for(int i = 0; i <= 99; i++){
        if(Caja1[1][i] == cajero){
            aux = aux + Caja1[0][i];
        }
        if(Caja2[1][i] == cajero){
            aux = aux + Caja2[0][i];
        }
        if(Caja3[1][i] == cajero){
            aux = aux + Caja3[0][i];
        }
        if(Caja4[1][i] == cajero){
            aux = aux + Caja4[0][i];
        }
        if(Caja5[1][i] == cajero){
            aux = aux + Caja5[0][i];
        }
    }
    return aux;
}

int cantPersonasAtendidasPorCaja(int caja){
    int aux = 0;
    for(int i = 0; i <= 99; i++){
        switch (caja){
            case 1:
                if(Caja1[1][i] != 0){
                    aux++;
                }
                break;
            case 2:
                if(Caja2[1][i] != 0){
                    aux++;
                }
                break;
            case 3:
                if(Caja3[1][i] != 0){
                    aux++;
                }
                break;
            case 4:
                if(Caja4[1][i] != 0){
                    aux++;
                }
                break;
            case 5:
                if(Caja5[1][i] != 0){
                    aux++;
                }
                break;
        }
    }

    return aux;

}

void cajaEspecifica(int caja){
        int aux = 0;
        switch (caja){
            case 1:
                for (int i = 0; i <= 99; i++){
                    aux = aux + Caja1[0][i];
                }
                printf("Caja ");
                printf("Recaudacion\n", aux);
                printf("%d ", caja);
                printf("%d\n", aux);
                break;
            case 2:
                for (int i = 0; i <= 99; i++){
                    aux = aux + Caja2[0][i];
                }
                printf("Caja ");
                printf("Recaudacion\n", aux);
                printf("%d ", caja);
                printf("%d\n", aux);
                break;
            case 3:
                for (int i = 0; i <= 99; i++){
                    aux = aux + Caja3[0][i];
                }
                printf("Caja ");
                printf("Recaudacion\n", aux);
                printf("%d ", caja);
                printf("%d\n", aux);
                break;
            case 4:
                for (int i = 0; i <= 99; i++){
                    aux = aux + Caja4[0][i];
                }
                printf("Caja ");
                printf("Recaudacion\n", aux);
                printf("%d ", caja);
                printf("%d\n", aux);
                break;
            case 5:
                for (int i = 0; i <= 99; i++){
                    aux = aux + Caja5[0][i];
                }
                printf("Caja ");
                printf("Recaudacion\n", aux);
                printf("%d ", caja);
                printf("%d\n", aux);
                break;
        }

}

void ejercicioMatrizImprimir(){
    int tabla[2][3]= {1,2,3,4,5,6};

    int aux = 0;
    for(int i = 0; i <=2; i++){

        for(int j = 0; j <= 1; j++){
            aux = aux + tabla[j][i];
        }
        printf("la suma de la columna %d es igual a %d\n", i+1, aux);
        aux = 0;
    }
    printf("\n--------------------------------\n");
     aux = 0;
     for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 2; j++){
            aux = aux + tabla[i][j];
        }
        printf("la suma de la fila %d es igual a %d\n", i+1, aux);
        aux = 0;

    }
 printf("\n--------------------------------\n");
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 2; j++){
            printf(" %d ", tabla[i][j]);
        }
        printf("\n");
    }
}
