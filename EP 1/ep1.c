<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>

int v3[40], v4[40], tamanho = 0;

void merge(int v1[20], int v2[20]) {
    int j = 0;
    for (int i = 0; i < 20; i++)
    {
        if(v1[i] >= 0) {
            v3[j] = v1[i];
            j++;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if(v2[i] >= 0) {
            v3[j] = v2[i];
            j++;
        }
    }
    
    while (j < 40)
    {
        v3[j] = -1;
        j++;
    }

    int m = 0;
    for (int i = 0; i < 39; i++)
    {
       for (int k = i + 1; k < 40; k++)
       {
            if (v3[i] == v3[k] && v3[i] >= 0)
            {
                v4[m] = v3[k];
                m++;
                v3[k] = -1;
            }
       }
    }
    
    int aux;
    for (int i = 0; i < 39; i++)
    {
       for (int k = i + 1; k < 40; k++)
       {
            if (v3[i] > v3[k])
            {
                aux = v3[i];
                v3[i] = v3[k];
                v3[k] = aux;
            }
       }
    }

    tamanho = m;

    while (m < 40)
    {
        v4[m] = -1;
        m++;
    }
}

int main() {
    int v1[20], v2[20];
    int i = 0, num;

    printf("Vetor 1:\n");
    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        v1[i] = num;
        i++;
        if(num < 0) {
            while (i < 20)
            {
                v1[i] = -1;
                i++;
            }
            
            break;
        }
        
    } while (i < 20);

    printf("Vetor 2:\n");
    i = 0;
    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        v2[i] = num;
        i++;
         if(num < 0) {
            while (i < 20)
            {
                v2[i] = -1;
                i++;
            }
            break;
        }
       
    } while (i < 20);

    int aux;
    for (int j = 0; j < 19; j++)
    {
       for (int k = j + 1; k < 20; k++)
       {
            if (v1[j] > v1[k])
            {
                aux = v1[j];
                v1[j] = v1[k];
                v1[k] = aux;
            }
       }
    }

    for (int j = 0; j < 19; j++)
    {
       for (int k = j + 1; k < 20; k++)
       {
            if (v2[j] > v2[k])
            {
                aux = v2[j];
                v2[j] = v2[k];
                v2[k] = aux;
            }
       }
    }
    
    merge(v1, v2);

    printf("vetor 1: \n");
    for (int i = 0; i < 20; i++)
    {
        if(v1[i] >= 0) {
            printf("%d \n", v1[i]);
        }
        
    }

    printf("vetor 2: \n");
    for (int i = 0; i < 20; i++)
    {
        if(v2[i] >= 0) {
            printf("%d \n", v2[i]);
        }
    }

    printf("vetor 3: \n");
    for (int i = 0; i < 40; i++)
    {
        if(v3[i] >= 0) {
            printf("%d \n", v3[i]);
        }
    }

    printf("vetor 4: \n");
    for (int i = 0; i < 40; i++)
    {
        if(v4[i] >= 0) {
            printf("%d \n", v4[i]);
        }
    }

    printf("Quantidade de repeticoes: %d", tamanho);
    return 0;
    getch();
=======
#include <stdio.h>
#include <conio.h>

int v3[40], v4[40], tamanho = 0;

void merge(int v1[20], int v2[20]) {
    int j = 0;
    for (int i = 0; i < 20; i++)
    {
        if(v1[i] >= 0) {
            v3[j] = v1[i];
            j++;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if(v2[i] >= 0) {
            v3[j] = v2[i];
            j++;
        }
    }
    
    while (j < 40)
    {
        v3[j] = -1;
        j++;
    }

    int m = 0;
    for (int i = 0; i < 39; i++)
    {
       for (int k = i + 1; k < 40; k++)
       {
            if (v3[i] == v3[k] && v3[i] >= 0)
            {
                v4[m] = v3[k];
                m++;
                v3[k] = -1;
            }
       }
    }
    
    int aux;
    for (int i = 0; i < 39; i++)
    {
       for (int k = i + 1; k < 40; k++)
       {
            if (v3[i] > v3[k])
            {
                aux = v3[i];
                v3[i] = v3[k];
                v3[k] = aux;
            }
       }
    }

    tamanho = m;

    while (m < 40)
    {
        v4[m] = -1;
        m++;
    }
}

int main() {
    int v1[20], v2[20];
    int i = 0, num;

    printf("Vetor 1:\n");
    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        v1[i] = num;
        i++;
        if(num < 0) {
            while (i < 20)
            {
                v1[i] = -1;
                i++;
            }
            
            break;
        }
        
    } while (i < 20);

    printf("Vetor 2:\n");
    i = 0;
    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        v2[i] = num;
        i++;
         if(num < 0) {
            while (i < 20)
            {
                v2[i] = -1;
                i++;
            }
            break;
        }
       
    } while (i < 20);

    int aux;
    for (int j = 0; j < 19; j++)
    {
       for (int k = j + 1; k < 20; k++)
       {
            if (v1[j] > v1[k])
            {
                aux = v1[j];
                v1[j] = v1[k];
                v1[k] = aux;
            }
       }
    }

    for (int j = 0; j < 19; j++)
    {
       for (int k = j + 1; k < 20; k++)
       {
            if (v2[j] > v2[k])
            {
                aux = v2[j];
                v2[j] = v2[k];
                v2[k] = aux;
            }
       }
    }
    
    merge(v1, v2);

    printf("vetor 1: \n");
    for (int i = 0; i < 20; i++)
    {
        if(v1[i] >= 0) {
            printf("%d \n", v1[i]);
        }
        
    }

    printf("vetor 2: \n");
    for (int i = 0; i < 20; i++)
    {
        if(v2[i] >= 0) {
            printf("%d \n", v2[i]);
        }
    }

    printf("vetor 3: \n");
    for (int i = 0; i < 40; i++)
    {
        if(v3[i] >= 0) {
            printf("%d \n", v3[i]);
        }
    }

    printf("vetor 4: \n");
    for (int i = 0; i < 40; i++)
    {
        if(v4[i] >= 0) {
            printf("%d \n", v4[i]);
        }
    }

    printf("Quantidade de repeticoes: %d", tamanho);
    return 0;
    getch();
>>>>>>> 83c648f3a0abad3670d0804247b4d6b1d1f743cb
}