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

struct tpilha{
    int dados[tamanho];
    int ini;
    int fim;
    };

//Variaveis Globais

struct tfila fila;
struct tpilha pilha;


//Funcoes Fila

void fila_mostrar() {

  int i;
  printf("[  ");

  for (i = 0; i < tamanho; i++) {
    printf("%d  ", fila.dados[i]);
  }

  printf("]\n\n");
}

void fila_entrar(){
  if (fila.fim == tamanho) {
    printf("\nA Fila est� cheia, imposs�vel adicionar Valor!\n\n");
    system("pause");
  }
  else
  {
    printf("\nDigite o valor a ser Ensirido: ");
    scanf("%d", &fila.dados[fila.fim]);
    fila.fim++;
  }
}

void fila_sair(){

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


//Funcoes Pilha

void pilha_mostrar(){

  int i;
  printf("[  ");

  for (i = 0; i < tamanho; i++) {
    printf("%d  ", pilha.dados[i]);
  }

  printf("]\n\n");
}

void pilha_entrar(){
  if (pilha.fim == tamanho) {
    printf("\nA Pilha est� cheia, imposs�vel adicionar Valor!\n\n");
    system("pause");
  }
  else
  {
    printf("\nDigite o valor a ser Empilhado: ");
    scanf("%d", &pilha.dados[pilha.fim]);
    pilha.fim++;
  }
}

void pilha_sair(){

  if (pilha.ini == pilha.fim) {
    printf("\nA Pilha est� vazia, imposs�vel Remover!\n\n");
    system("pause");
  }
  else
  {
    pilha.dados[pilha.fim-1] = 0;
    pilha.fim--;
  }
}



void menu_geral(){
    printf("Escolha o Numero:\n");
    printf("1 - Menu Fila\n");
    printf("2 - Menu Pilha\n");
    printf("0 - Sair\n\n");
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
    system("cls");
    main();
}

void menu_pilha(){
    system("cls");
    int op = 1;

    while (op != 0){

    system("cls");
    pilha_mostrar();
    printf("\nEscolha uma obcao:\n");
    printf("1 - Enserir\n");
    printf("2 - Remover\n");
    printf("0 - Sair\n\n");
    scanf("%d", &op);

        switch(op){
            case 1: pilha_entrar();
            break;

            case 2: pilha_sair();
            break;
        }
    }
    system("cls");
    main();
}


//Principal

int main() {

    menu_geral();
    int op = 0;
    scanf("%d", &op);

        switch(op){
            case 1 : menu_fila();
            break;

            case 2 : menu_pilha();
            break;

        }

return(0);
}
