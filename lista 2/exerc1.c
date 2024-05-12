#include <stdio.h>
#include <conio.h>

int main() {

    int N;
    do
    {
        printf("Digite a quantidade de numeros que deseja entrar: \n");
        scanf("%d", &N);
        
    } while (N < 0);

    int numeros[N], count = 0, num;

    do
    {
        printf("Digite um numero inteiro nao negativo: \n");
        scanf("%d", &num);

        if(num >= 0) {
            numeros[count] = num;
            count++;
        }
        
    } while (count < N);

    int maior = 0, menor = numeros[0];

    for (int i = 0; i < N; i++)
    {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        if(numeros[i] < menor) {
            menor = numeros[i];
        }
        
    }
    float menor1 = menor, maior1 = maior;
    float media = (menor1 + maior1)/2;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Soma: %d\n", menor + maior);
    printf("Media: %.2f", media);

    getch();
    return 0;
}