#include <stdio.h>
#include <stdlib.h>

FILE *fptr;
float nota;
char sexo;
float mediaM = 0;
float mediaF = 0;
float countM = 0;
float countF = 0;

int main() {
    fptr = fopen("4.txt", "r");

    if (fptr == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        return 1; 
    }

    while (fscanf(fptr, "%c %f\n", &sexo, &nota) != EOF) {
        if (sexo == 'F') {
            mediaF += nota;
            countF++;
        } else {
            mediaM += nota;
            countM++;
        }
    }

    fclose(fptr);

    mediaF /= countF;
    mediaM /= countM;

    (mediaF > mediaM) ? printf("Média feminina: %f\n", mediaF) : printf("Média masculina: %f\n", mediaM);

    return 0; 
}
