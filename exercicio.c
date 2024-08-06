#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, c;
    double delta, raizDelta;
    double raizX1, raizX2;

    printf("Digite os coeficientes 'a', 'b' e 'c'\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("a = %lf, b = %lf, c = %lf\n", a, b, c);

    delta = pow(b, 2) - 4 * a * c;
    raizDelta = sqrt(delta);
    printf("delta = %lf\n", delta);

    if (delta < 0){
        printf("Nao possui raizes reais\n");
    }else if (delta == 0){
        raizX1 = (-b + raizDelta) / (2 * a);
        printf("So tem uma raiz: %lf\n", raizX1);
    }else{
        raizX1 = (-b + raizDelta) / (2 * a);
        raizX2 = (-b - raizDelta) / (2 * a);
        printf("Duas raizes: %lf e %lf\n", raizX1, raizX2);
    }
}