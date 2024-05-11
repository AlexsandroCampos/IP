#include <stdio.h>
#include <conio.h>
#include <math.h>

int palindromo(int num) {
    int tamanho = 0;
    int aux = num;
    int n2 = 0;
    
    while (aux > 0)
    {
        aux = aux/10;
        tamanho++;
    }
    aux = num;
    int count = pow(10, tamanho-1);

    for (int i = 0; i < tamanho; i++)
    {
        n2 = (aux % 10) * count + n2;
        aux = aux/10;
        count = count/10;
    }

    if(n2 == num){
        return 1;
    }
    return 0;
}

int main() {
    int num;
    printf("Digita o palindromo: \n");
    scanf("%d", &num);
    printf("Resultado: %d\n", palindromo(num));
    return 0;
    getch();
}