<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int num;
    double aux, fraction, num1, resultado;

    do
    {
       printf("Digite um numero inteiro positivo e menor que 10.000\n");
       scanf("%d", &num);
    } while (num <= 0 || num >= 10000);

    num1 = num;

    for (int i = 0; i < 4; i++)
    {
        aux = num1/10;
        fraction = modf(aux, &num1);
        resultado = fraction * 10;

        if(i == 0)
        {
            printf("Unidade: %.0f\n", resultado);
        }

        if(i == 1)
        {
            printf("Dezena: %.0f\n", resultado);
        }

        if(i == 2)
        {
            printf("Centena: %.0f\n", resultado);
        }

        if(i == 3)
        {
            printf("Milhar: %.0f\n", resultado);
        }
    }
    
    getch();
    return 0;
=======
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int num;
    double aux, fraction, num1, resultado;

    do
    {
       printf("Digite um numero inteiro positivo e menor que 10.000\n");
       scanf("%d", &num);
    } while (num <= 0 || num >= 10000);

    num1 = num;

    for (int i = 0; i < 4; i++)
    {
        aux = num1/10;
        fraction = modf(aux, &num1);
        resultado = fraction * 10;

        if(i == 0)
        {
            printf("Unidade: %.0f\n", resultado);
        }

        if(i == 1)
        {
            printf("Dezena: %.0f\n", resultado);
        }

        if(i == 2)
        {
            printf("Centena: %.0f\n", resultado);
        }

        if(i == 3)
        {
            printf("Milhar: %.0f\n", resultado);
        }
    }
    
    getch();
    return 0;
>>>>>>> 83c648f3a0abad3670d0804247b4d6b1d1f743cb
}