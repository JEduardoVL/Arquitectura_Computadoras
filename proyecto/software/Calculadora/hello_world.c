/*
 * Calculadora de números flotantes.
 * Elaboro: Valerio López José Eduardo
 * */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE 100

void suma() {
    char input[MAX_INPUT_SIZE];
    float res = 0;
    char *token;

    printf("\n \t SUMA ");
    printf("\n Ingresa la operacion a sumar (ejemplo: 2+3+4.5): \n");
    fgets(input, MAX_INPUT_SIZE, stdin);  // Lee la línea completa

    token = strtok(input, "+");
    while (token != NULL) {
        res += atof(token);
        token = strtok(NULL, "+");
    }

    printf("El resultado es: %f\n", res);
}

void resta() {
    char input[MAX_INPUT_SIZE];
    float res;
    char *token;

    printf("\n \t RESTA ");
    printf("\n Ingresa la operacion a restar (ejemplo: 10-3-2): \n");
    fgets(input, MAX_INPUT_SIZE, stdin);

    token = strtok(input, "-");
    if (token != NULL) {
        res = atof(token);
        token = strtok(NULL, "-");
    }

    while (token != NULL) {
        res -= atof(token);
        token = strtok(NULL, "-");
    }

    printf("El resultado es: %f\n", res);
}

void multi() {
    char input[MAX_INPUT_SIZE];
    float res = 1;
    char *token;

    printf("\n \t MULTIPLICACION ");
    printf("\n Ingresa la operacion a multiplicar (ejemplo: 2*3*2): \n");
    fgets(input, MAX_INPUT_SIZE, stdin);

    token = strtok(input, "*");
    while (token != NULL) {
        res *= atof(token);
        token = strtok(NULL, "*");
    }

    printf("El resultado es: %f\n", res);
}

void divi() {
    char input[MAX_INPUT_SIZE];
    float res;
    char *token;

    printf("\n \t DIVISION");
    printf("\n Ingresa la operacion a dividir (ejemplo: 12/2/3): \n");
    fgets(input, MAX_INPUT_SIZE, stdin);

    token = strtok(input, "/");
    if (token != NULL) {
        res = atof(token);
        token = strtok(NULL, "/");
    }

    while (token != NULL) {
        res /= atof(token);
        token = strtok(NULL, "/");
    }

    printf("El resultado es: %f\n", res);
}

int main(){
    int opc;

    do {
        printf("\t Menu \n");
        printf("[1] Sumar\n");
        printf("[2] Restar\n");
        printf("[3] Multiplicar\n");
        printf("[4] Dividir\n");
        printf("[0] Salir\n");
        printf("Opcion: ");
        scanf("%d", &opc);
        getchar();  // Consume el '\n' después de leer un número

        switch(opc){
            case 1: suma(); break;
            case 2: resta(); break;
            case 3: multi(); break;
            case 4: divi(); break;
            case 0: printf("\n \t Fin de programa. \n"); break;
            default: printf("\nIntroduce una opción válida...\n"); break;
        }
    } while(opc != 0);

    return 0;
}
