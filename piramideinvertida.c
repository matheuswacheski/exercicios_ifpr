#include <stdio.h>
#include <locale.h>

void piramideInvertida(int qtdLinhas){
    int qtdast = 2 * qtdLinhas - 1; // Começa com a maior quantidade de asteriscos

    for(int l = 0; l < qtdLinhas; l++){
        for(int p = 0; p < l; p++){
            printf(" ");
        }
        for(int a = 0; a < qtdast; a++){
            printf("*");
        }
        qtdast -= 2; // Reduz o número de asteriscos em 2 a cada linha
        printf("\n");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int linhas;

    printf("Coloque a altura: ");
    scanf("%d", &linhas);

    piramideInvertida(linhas);

    return 0;
}
