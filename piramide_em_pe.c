#include <stdio.h>
#include <locale.h>

void piramideEmPe(int qtdLinhas){
    // O número de asteriscos na primeira linha é 1 e aumenta de 2 em 2 a cada linha
    int qtdast = 1; 

    for(int l = 0; l < qtdLinhas; l++){
        // Imprime os espaços para centralizar os asteriscos
        for(int s = 0; s < qtdLinhas - l - 1; s++){
            printf(" ");
        }
        // Imprime os asteriscos
        for(int a = 0; a < qtdast; a++){
            printf("*");
        }
        qtdast += 2; // Aumenta o número de asteriscos em 2 a cada linha
        printf("\n");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int linhas;

    printf("Coloque a altura: ");
    scanf("%d", &linhas);

    piramideEmPe(linhas);

    return 0;
}
