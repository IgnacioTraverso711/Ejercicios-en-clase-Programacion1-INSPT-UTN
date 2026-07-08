#include <stdio.h>
#include <stdlib.h>

//Variable globales del sistema.
int total_goles_torneo = 0;
int contador_jugadores = 0;
int partido_mayorIEO;
int IEO_del_mayor_partido = 0;
int cant_total_jugadores = 0;
int cant_total_buenos = 0;
int IEO_total;
    //srand(time(NULL));
    //y = (rand() % 10) + 1;

// Funcion que calcula el procentaje de jugadores con IEO mayor o igual a 50
double calcularPorcentajeIEO(double cant_jugadores, double cant_IEO50){
    double aux = (cant_IEO50/cant_jugadores) * 100;
    return aux;
}

int main()
{

    int identificador, goles_jugador, remates_jugador, num_camiseta, IEO_jugador, cant_jugadores, cant_goles_partido,cant_buenos,num_IEO;
    int IEO_partido;
    printf("------------------------- \n");
    printf("----- MUNDIAL 2026 ------ \n");
    printf("------------------------- \n");
    printf("Tenes que ingresar un numero identificador positivo, si es 0 se termina el programa \n");
    printf("ese va ser el numero del partido \n");
    printf("Luego por partido vas a ingresar los datos de los futbolistas que participan   \n");
    // primer do while, es el del partido
    do{
        cant_goles_partido = 0;
        cant_jugadores = 0;
        cant_buenos = 0;
        num_IEO = 0;
        identificador = verificarIdentificador();
        if(identificador != 0){
            // Este do while corresponde a los jugadores.
            do{
                num_camiseta = verificarCamiseta();
                if(num_camiseta != 0){
                    remates_jugador = verificarRemates();
                    goles_jugador = verificarGoles(remates_jugador);
                    //------------------------------------------------------//
                    IEO_jugador = calcularIEO(goles_jugador, remates_jugador);
                    printf("el jugador con la casaca %d", num_camiseta);
                    printf(" tiene un IEO de %d\n", IEO_jugador);
                    //------------------------------------------------------//
                    cant_jugadores ++;
                    cant_total_jugadores ++;
                    cant_goles_partido = cant_goles_partido + goles_jugador;
                    total_goles_torneo = total_goles_torneo + goles_jugador;
                    num_IEO = num_IEO + IEO_jugador;
                    if(IEO_jugador > 50){
                        cant_buenos ++;
                        cant_total_buenos ++;
                    }

                }else{
                IEO_partido = promedioIEO(cant_jugadores,num_IEO);
                if(IEO_partido > IEO_del_mayor_partido){
                    IEO_del_mayor_partido = IEO_partido;
                    partido_mayorIEO = identificador;
                }
        }
            }while(num_camiseta != 0);
            //------------------------------------------------------//
            printf("La cantidad de jugadores analizados en este partido fue de %d\n",cant_jugadores );
            printf("El total de goles del partido fue %d\n", cant_goles_partido);
        }
    }while(identificador != 0);

    double porcentajeIEO_Final = calcularPorcentajeIEO(cant_total_jugadores,cant_total_buenos);
    printf("%d\n", cant_total_buenos);
    printf("El codigo del partido con mayor Efectividad ofensiva es: %d\n", partido_mayorIEO);
    printf("La cantidad de goles total del torneo es de: %d\n", total_goles_torneo);
    printf("La cantidad de jugadores total analizada del torneo es de: %d\n", cant_total_jugadores);
    printf("El porcentaje de jugadores con IEO > a 50 es de: %f\n", porcentajeIEO_Final);
    printf("Terminando Programa");

}

// Funcion que calcula el Indice de Efectividad Ofensiva recibe la cantidad de goles y los remates hechos, devuelve el IEO.
int calcularIEO(int goles, int remates){
    int ieo;
    ieo = (goles * 100)/remates;
    return ieo;
    // Debido a que si la variable remates es de valor 0 el ieo, va a quedar como resultado 0
    // no considero necesario agregar codigo para asegurarme de que si no se hicieron remates el ieo quede en 0
}
// Funcion que pide y verifica si el numero de camiseta elegido es valido, devuelve numero de camiseta valida elegida
int verificarCamiseta(){
    int num_camiseta;
    do{
        printf("Ingresar el numero de camiseta\n");
        scanf (" %d", &num_camiseta);
        if(num_camiseta < 0 || num_camiseta > 99){
            printf("el numero ingresado es incorrecto porque no esta entre 1 y 99\n");
            printf("Vuelva a ");
        }
    }while(num_camiseta < 0 || num_camiseta > 99);
    return num_camiseta;
}
// Funcion que pide y verifica si el numero de remates elegido es valido, devuelve una cantidad de reamtes valida elegida
int verificarRemates(){
    int remates;
    do{
        printf("Ingresar remates del jugador\n");
        scanf (" %d", &remates);
        if(remates < 0){
            printf("el numero ingresado es incorrecto porque no es positivo\n");
            printf("Vuelva a ");
        }
    }while(remates < 0);
    return remates;
}
// Funcion que pide y verifica si el numero de goles elegido es valido, devuelve una cantidad de goles valida elegida recibe cantidad de remates
int verificarGoles(int remates){
    int goles, seguimos;
    do{
        printf("Ingresar goles\n");
        scanf (" %d", &goles);
        if(goles < 0){
            printf("el numero ingresado es incorrecto porque no es positivo\n");
            printf("Vuelva a ");
            seguimos = 1;
        }else if(goles > remates){
            printf("el numero ingresado es incorrecto porque hizo mas goles que remates\n");
            printf("Vuelva a ");
            seguimos = 1;
        }else{
            seguimos = 0;
        }
    }while(seguimos);

    return goles;
}
// Funcion que pide y verifica si el numero de identificador es valido, devuelve identificador.
int verificarIdentificador(){
    int identificador;
    do{
        printf("Ingresar el identificador del partido\n");
        scanf (" %d", &identificador);
        if(identificador < 0){
            printf("el numero ingresado es incorrecto porque no es positivo\n");
            printf("Vuelva a ");
        }
    }while(identificador < 0);
    return identificador;
}
// Funcion que pide la cantidad de jugadores y la cantidad del IEO y genera el promedio de IEO
int promedioIEO(int cantjugadores, int canIEO){
    int aux;
    aux = canIEO/cantjugadores;
    return aux;
}
