#include <stdio.h>
#include <conio.h>

int main() {
    int count, count1 = 0, count2 = 0, count3 = 0, num, N;

    do
    {
        printf("Digite quantos numeros quer entrar:");
        scanf("%d", &N);
    } while (N <= 0);
    
    do
    {
        do
        {
            printf("Digite um numero: ");
            scanf("%d", &num);
        } while (num <= 0);
       
        if(num % 4 == 0) {
            count1++;
        }

        if(num % 7 == 0) {
            count2++;
        }

        if(num % 13 == 0) {
            count3++;
        }

        count++;
    } while (count < N);
    
    
    printf("Quantidade de numeros divisiveis por 4: %d \n", count1);
    printf("Quantidade de numeros divisiveis por 7: %d \n", count2);
    printf("Quantidade de numeros divisiveis por 13: %d \n", count3);

    getch();
    return 0;
}