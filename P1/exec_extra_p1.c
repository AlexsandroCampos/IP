#include <stdio.h>

int bissexto(int ano) {
    if(ano % 4 == 0) {
        if(ano % 100 == 0 && ano % 400 == 0) {
            return 1;
        }
        else if (ano % 100 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
    }
    else
    {
        return 0;
    }
}

int verificar(int ano, int mes, int dia, int data) {
    if(data <= 0) {
        return 0;
    }
    
    if(dia < 1 || dia > 31) {
        return 0;
    }

    if(mes < 1 || mes > 12) {
        return 0;
    }

    switch (mes)
    {
        case 2:
            if (dia == 29 && !bissexto(ano))
            {
                return 0;
            }
            
            break;
        case 4:
            if (dia > 30)
            {
                return 0;
            }
            
            break;
        case 6:
            if (dia > 30)
            {
                return 0;
            }
            
            break;
        case 9:
            if (dia > 30)
            {
                return 0;
            }
            
            break;
        case 11:
            if (dia > 30)
            {
                return 0;
            }
            break;
        
        default:
            break;
    }

    return 1;

}

int main() {
    printf("Digite uma data neste formato: DD/MM/AAAA (sem as barras) \n");
    int data, dia, mes, ano;
    scanf("%d", &data);

    ano = data % 10000;
    mes = (data/10000) % 100;
    dia = (data/1000000);

    if(verificar(ano, mes, dia, data)) {
        printf("Data valida");
    } 
    else
    {
        printf("Data invalida");
    }
    
    

    // printf("Dia: %d \n", dia);
    // printf("Mes: %d \n", mes);
    // printf("Ano: %d \n", ano);

    return 0;
}