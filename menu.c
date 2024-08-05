#include <stdio.h>
#include <locale.h>
int main() {
setlocale (LC_ALL, "Portuguese"); // Permite imprimir acentos e cedilha.//
int opcao;
printf("Opção: ");
scanf("%d", &opcao);
fflush(stdin); // Limpa a memória do teclado.
printf("\n\n");
switch (opcao) {
case 1:
break;
case 2:
break;
case 0:
break;
default:
printf("Opção inválida!\n");
break;
}
printf("\n\n");
 while (opcao != 0);
}
