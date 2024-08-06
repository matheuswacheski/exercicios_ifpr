#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Permite imprimir acentos e cedilha.//
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
