#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

struct tpilha{
    int dados[tamanho];
    int ini;
    int fim;
    };

struct tpilha pilha;


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
}

int main() {

    system("cls");
    menu_pilha();
    
return(0);
}