#include <stdio.h>
#include <locale.h>

int main()
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
