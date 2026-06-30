#include <stdio.h>
#include <stdio.h>

int main() {
    int participantes = 5;
    int disparos_por_participante = 10;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int centro = 0;

    float x, y;

    printf("--- Registro de Disparos (Concurso de Tiro al Blanco) ---\n\n");


    for (int i = 1; i <= participantes; i++) {
        printf("--- Participante %d ---\n", i);


        for (int j = 1; j <= disparos_por_participante; j++) {
            printf("  Disparo %d - Ingrese coordenada X e Y (ej: 2.5 -1): ", j);
            scanf("%f %f", &x, &y);
            if (x == 0 && y == 0) {
                centro++;
            } else if (x > 0 && y > 0) {
                c1++;
            } else if (x < 0 && y > 0) {
                c2++;
            } else if (x < 0 && y < 0) {
                c3++;
            } else if (x > 0 && y < 0) {
                c4++;
            }

        printf("\n");
    }

    printf("Disparos en el Cuadrante I:   %d\n", c1);
    printf("Disparos en el Cuadrante II:  %d\n", c2);
    printf("Disparos en el Cuadrante III: %d\n", c3);
    printf("Disparos en el Cuadrante IV:  %d\n", c4);
    printf("Disparos en el blanco (0,0):  %d\n", centro);


    return 0;
}
