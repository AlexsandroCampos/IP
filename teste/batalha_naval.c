<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    bool campo1[10][10] = {{false}}, hist1[10][10] = {{false}}, campo2[10][10] = {{false}}, hist2[10][10] = {{false}}, validacao = true;
    char letra;
    int numero, numeros[4], count = 0;

    printf("Primeiro jogador");
    do
    {
        do
        {
            printf("Digite a letra da primeira posicao da embarcacao: (a-j)");
            scanf("%c", &letra);
            validacao = validarLetra(letra);
            if(validacao)
            {
                printf("Letra invalida. Digite novamente");
            }
        } while (validacao);
        
        numeros[0] = converterParaNumero(letra);

        do
        {
            printf("Digite o numero da primeira posicao da embarcacao: (1-10)");
            scanf("%d", &numero);
            if(numero > 10 || numero < 1)
            {
                validacao = true;
                printf("Numero invalido. Digite novamente");
            }
        } while (validacao);

        
        numeros[1] = numero-1;

        do
        {
            printf("Digite a letra da ultima posicao da embarcacao: (a-j)");
            scanf("%c", &letra);
            validacao = validarLetra(letra);
            if(validacao)
            {
                printf("Letra invalida. Digite novamente");
            }
        } while (validacao);

        numeros[2] = converterParaNumero(letra);

        do
        {
            printf("Digite o numero da ultima posicao da embarcacao: (1-10)");
            scanf("%d", &numero);
            if(numero > 10 || numero < 1)
            {
                validacao = true;
                printf("Numero invalido. Digite novamente");
            }
        } while (validacao);
       
        numeros[3] = numero-1;

        if(validaBarco(numeros, campo1)) {
            count++;
            colocarBarco();
        }

        else {
            printf("Pocisionamento invalido");
        }
        
    } while (count < 7);
    
    return 0;
}

bool validaBarco(int numeros[4], bool campo[10][10]) {
    int indices[8];
    for (int i = 0; i < 4; i = i + 2)
    {
        if(campo[numeros[i]][numeros[i+1]]) {
            return false;
        }
    }

    for (int i = -1; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           
            
        }
        
    }
    

    
    


}

bool validarLetra(char letra) {
    letra = tolower(letra);
    int valor;
    switch (letra) {
        case 'a':
            return false;
            break;
        case 'b':
            return false;
            break;
        case 'c':
            return false;
            break;
        case 'd':
            return false;
            break;
        case 'e':
            return false;
            break;
        case 'f':
            return false;
            break;
        case 'g':
            return false;
            break;
        case 'h':
            return false;
            break;
        case 'i':
            return false;
            break;
        case 'j':
            return false;
            break;
        default:
           return true;
    }

}

int converterParaNumero(char letra) {
    letra = tolower(letra);
    int valor;
    switch (letra) {
        case 'a':
            valor = 0;
            break;
        case 'b':
            valor = 1;
            break;
        case 'c':
            valor = 2;
            break;
        case 'd':
            valor = 3;
            break;
        case 'e':
            valor = 4;
            break;
        case 'f':
            valor = 5;
            break;
        case 'g':
            valor = 6;
            break;
        case 'h':
            valor = 7;
            break;
        case 'i':
            valor = 8;
            break;
        case 'j':
            valor = 9;
            break;
        default:
            printf("Letra invalida.\n");
            return 1; // Sai do programa com código de erro
    }

    return valor;


}
=======
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    bool campo1[10][10] = {{false}}, hist1[10][10] = {{false}}, campo2[10][10] = {{false}}, hist2[10][10] = {{false}}, validacao = true;
    char letra;
    int numero, numeros[4], count = 0;

    printf("Primeiro jogador");
    do
    {
        do
        {
            printf("Digite a letra da primeira posicao da embarcacao: (a-j)");
            scanf("%c", &letra);
            validacao = validarLetra(letra);
            if(validacao)
            {
                printf("Letra invalida. Digite novamente");
            }
        } while (validacao);
        
        numeros[0] = converterParaNumero(letra);

        do
        {
            printf("Digite o numero da primeira posicao da embarcacao: (1-10)");
            scanf("%d", &numero);
            if(numero > 10 || numero < 1)
            {
                validacao = true;
                printf("Numero invalido. Digite novamente");
            }
        } while (validacao);

        
        numeros[1] = numero-1;

        do
        {
            printf("Digite a letra da ultima posicao da embarcacao: (a-j)");
            scanf("%c", &letra);
            validacao = validarLetra(letra);
            if(validacao)
            {
                printf("Letra invalida. Digite novamente");
            }
        } while (validacao);

        numeros[2] = converterParaNumero(letra);

        do
        {
            printf("Digite o numero da ultima posicao da embarcacao: (1-10)");
            scanf("%d", &numero);
            if(numero > 10 || numero < 1)
            {
                validacao = true;
                printf("Numero invalido. Digite novamente");
            }
        } while (validacao);
       
        numeros[3] = numero-1;

        if(validaBarco(numeros, campo1)) {
            count++;
            colocarBarco();
        }

        else {
            printf("Pocisionamento invalido");
        }
        
    } while (count < 7);
    
    return 0;
}

bool validaBarco(int numeros[4], bool campo[10][10]) {
    int indices[8];
    for (int i = 0; i < 4; i = i + 2)
    {
        if(campo[numeros[i]][numeros[i+1]]) {
            return false;
        }
    }

    for (int i = -1; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           
            
        }
        
    }
    

    
    


}

bool validarLetra(char letra) {
    letra = tolower(letra);
    int valor;
    switch (letra) {
        case 'a':
            return false;
            break;
        case 'b':
            return false;
            break;
        case 'c':
            return false;
            break;
        case 'd':
            return false;
            break;
        case 'e':
            return false;
            break;
        case 'f':
            return false;
            break;
        case 'g':
            return false;
            break;
        case 'h':
            return false;
            break;
        case 'i':
            return false;
            break;
        case 'j':
            return false;
            break;
        default:
           return true;
    }

}

int converterParaNumero(char letra) {
    letra = tolower(letra);
    int valor;
    switch (letra) {
        case 'a':
            valor = 0;
            break;
        case 'b':
            valor = 1;
            break;
        case 'c':
            valor = 2;
            break;
        case 'd':
            valor = 3;
            break;
        case 'e':
            valor = 4;
            break;
        case 'f':
            valor = 5;
            break;
        case 'g':
            valor = 6;
            break;
        case 'h':
            valor = 7;
            break;
        case 'i':
            valor = 8;
            break;
        case 'j':
            valor = 9;
            break;
        default:
            printf("Letra invalida.\n");
            return 1; // Sai do programa com código de erro
    }

    return valor;


}
>>>>>>> 83c648f3a0abad3670d0804247b4d6b1d1f743cb
 