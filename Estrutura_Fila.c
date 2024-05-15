//Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

//Estruturas

struct tfila {
    int dados[tamanho];
    int ini;
    int fim;
};

//Variaveis Globais

struct tfila fila;

//Funcoes Fila

void fila_mostrar() {

  int i;
  printf("[  ");

  for (i = 0; i < tamanho; i++) {
    printf("%d  ", fila.dados[i]);
  }

  printf("]\n\n");
}

void fila_entrar() {
  if (fila.fim == tamanho) {
    printf("\nA Fila esta cheia, impossivel adicionar Valor!\n\n");
    system("pause");
  }
  else
  {
    printf("\nDigite o valor a ser Ensirido: ");
    scanf("%d", &fila.dados[fila.fim]);
    fila.fim++;
  }
}

void fila_sair() {

  if (fila.ini == fila.fim) {
    printf("\nA Fila est� vazia, imposs�vel Remover!\n\n");
    system("pause");
  }
  else
  {
    for (int i = 0; i < tamanho; i++){
        fila.dados[i] = fila.dados[i+1];
    }
    fila.dados[fila.fim] = 0;
    fila.fim--;
  }
}

void menu_fila(){
    system("cls");
    int op = 1;

    while (op != 0){

    system("cls");
    fila_mostrar();
    printf("\nEscolha uma obcao:\n");
    printf("1 - Enserir\n");
    printf("2 - Remover\n");
    printf("0 - Sair\n\n");
    scanf("%d", &op);

        switch(op){
            case 1: fila_entrar();
            break;

            case 2: fila_sair();
            break;
        }
    }
}

//Principal

int main() {

    system("cls");
    menu_fila();
    
return(0);
}
