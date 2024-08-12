#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // Necessário para usar a função sqrt()

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
    if (n <= 1)
    {
        printf("Número NÂO é primo\n");
        return;
    }
    
    int i;
    int ehPrimo = 1; // Por enquanto é primo.
    
    // Verificar divisibilidade até a raiz quadrada de n
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ehPrimo = 0; // Não é primo.
            break;       // Finaliza a procura.
        }
    }
    
    if (ehPrimo)
    {
        printf("Número é primo\n");
    }
    else
    {
        printf("Número NÂO é primo\n");
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
        case 3: // Corrigir para sair
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("\n\n");
    } while (opcao != 3); // Alterado para sair quando a opção for 3
}

