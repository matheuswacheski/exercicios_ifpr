#include <stdio.h>
#include <locale.h>

void imprimeCaixa(int qtdLinhas, int qtdColunas){
    for(int l=0; l<qtdLinhas; l++){
        for(int c=0; c<qtdColunas; c++){
            printf("*");
        }printf("\n");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int linhas, colunas;

    printf("Coloque o número de linhas");
    scanf("%d", &linhas);

    printf("Coloque o número de colunas");
    scanf("%d", &colunas);

    imprimeCaixa(linhas, colunas);
}
