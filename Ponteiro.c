#include <stdio.h>
#include <stdlib.h>

int x;
int *ptr_x;

int main (){

    system("cls");
    printf("Digite Valor de X: \n\n");
    scanf("%d", &x);
    
    ptr_x = &x;
    

    printf("\nValor X: %d\n", x);
    printf("Endereco X: %p\n", &x);
    printf("Endereco Ponteiro: %p\n", ptr_x);
    printf("Valor Ponteiro:  %d\n\n\n", *ptr_x);


    system("Pause");
    return(0);
}