#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Permite imprimir acentos e cedilha.
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
