#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void fatorial()
{
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    fflush(stdin); // Limpa a memória do teclado.
    int i, fat = 1;
    for (i = 2; i <= n; i++)
    {
        fat = fat * i;
    }
    printf("Fatorial é: %d\n", fat);
}

void primo()
{
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    fflush(stdin); // Limpa a memória do teclado.
    int i;
    int ehPrimo = 1; // por enquanto é primo.
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            ehPrimo = 0; // não é primo.
            break;       // finaliza a procura.
        }
    }
    if (ehPrimo)
    {
        printf("Número é primo\n");
    }
    else
    {
        printf("Número NÃO é primo\n");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Permite imprimir acentos e cedilha.//
    int opcao;
    do
    {
        printf("Opção: \n1-fatorial\n2-primo\n3-sair\n");
        scanf("%d", &opcao);
        fflush(stdin); // Limpa a memória do teclado.
        printf("\n\n");
        switch (opcao)
        {
        case 1:
            fatorial();
            break;
        case 2:
            primo();
            break;
        case 0:
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("\n\n");
    } while (opcao != 0);
}
