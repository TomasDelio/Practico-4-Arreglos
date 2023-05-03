#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargador(int arr[], int dim);
void mostramelo(int arr[], int val);
int sumador (int arr[], int val);
void copipila(int arr[], Pila *dada, int val);
float sumaran(float arr[], int dim);
void verflo(float arr[], int val);
float sumadores (float arr[], int val);
char menor(char arr[],int val, char dato);
char chargador(char arr[], int dim);
void insertainador(char arr[],int val, char dato);
void cordenainador(char arr[], int val);
char percha(char arr[],int val);
char mayonesa(char arr[], int val);
int neuquen(int arr[], int val);
void copybara(int arr[], int val);
void j1j2(char arr[], int val);
char ilegales(char arr[], int i, int val);
int ggwp(int arr[], int val);



int main()
{
    int option;
    char yes;
    int arr[100];
    int dim, val;
    int num;
    int num2;
    int num3;
    char dato;
    float ahre[100];
    char a[100];
    char b[100];
    char c[100];

    Pila pilita;
    inicpila(&pilita);

    do
    {
        printf("Bienvenido al TP N4: Arreglos, por favor, seleccione un ejercicio: ");
        fflush(stdin);
        scanf("%i", &option);
        switch(option)
        {

        case 1:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);
            printf("\n\nLa cantidad de elementos que cargaste fueron: %i\n\n", val);
            break;

        case 2:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);
            mostramelo(arr,val);
            break;
        case 3:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);
            num= sumador(arr,val);
            printf("La suma del los elemntos del arreglo son: %i \n", num);
            break;

        case 4:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);
            copipila(arr, &pilita, val);
            mostrar(&pilita);
            break;

        case 5:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = sumaran(ahre, num);
            verflo(ahre, val);
            num=sumadores(ahre, val);
            printf("La suma de los numeros cargados en los 100 elementos es de: %i \n", num);
            break;

        case 6:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = chargador(arr, num);
            printf("\n\n Escriba el dato que quiera buscar: \n");
            fflush(stdin);
            scanf("%c", &dato);
            num3 = menor(arr, val,dato);
            if(num3==1)
            {
                printf("\nEl dato que ingreso se encuentra en el arreglo.\n");
            }
            else
            {
                printf("\nEl dato que ingreso NO se encuentra en el arreglo.\n");
            }
            break;

        case 7:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = chargador(a, num);
            percha(a,val);

            printf("\n\n Escriba el dato que quiera insertar: \n");
            fflush(stdin);
            scanf("%c", &dato);

            insertainador(a, val-1, dato);
            val++;
            percha(a,val);
            break;

        case 8:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = chargador(a, num);
            percha(a,val);

            dato=mayonesa(a, val);
            printf("\n\nEl maximo caracter del arreglo es: %c\n\n", dato);
            break;

        case 9:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);
            mostramelo(arr,val);
            dato= neuquen(arr, val);
            if(dato==1)
            {
                printf("El arreglo es capicua\n");
            }
            else
            {
                printf("El arreglo NO es capicua\n");
            }
            break;

        case 10:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);
            mostramelo(arr, val);
            copybara(arr,val);
            printf("ARREGLO DADO VUELTA\n");
            mostramelo(arr, val);
            break;

        case 11:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = chargador(a, num);
            percha(a,val);

            printf("\nSi desea ordenarlo por insersion presione 'i', si desea hacerlo por seleccion\npresione 's' ");
            fflush(stdin);
            scanf("%c", &yes);

            if(yes=='i')
            {
                cordenainador(a,val);
                percha(a,val);
            }
            else
            {
                j1j2(a,val);
                percha(a,val);
            }
            break;

        case 12:
            printf("\n Elija la dimension del arreglo A: ");
            fflush(stdin);
            scanf("%i", &num);
            val = chargador(a, num);
            percha(a,val);

            printf("\n Elija la dimension del arreglo B: ");
            fflush(stdin);
            scanf("%i", &num);
            val = chargador(b, num);
            percha(b,val);

            intercalainador(c,a,b,val);

        case 13:
            printf("\n Elija la dimension del arreglo: ");
            fflush(stdin);
            scanf("%i", &num);
            val = cargador(arr, num);

            ggwp(arr, val);
            mostramelo(arr, val);


            break;


            break;



        default:
            printf("\nPONE UN NUMERO VALIDO BOBOOOOOOOOOOOO\n");
            break;

        }
        printf("Desea realizar otro ejercicio precione 's' para si: ");
        fflush(stdin);
        scanf("%c", &yes);
    }
    while(yes == 's'|| yes == 'S');

    return 0;
}


int cargador(int arr[], int dim)
{
    int i=0;
    char yes = 's';
    while(i<dim && yes == 's'|| yes == 'S' )
    {
        printf("\nElija el numero que desee cargar al arreglo: ");
        fflush(stdin);
        scanf("%i", &arr[i]);
        i++;
        printf("\ndesea agregar alguno mas? presione 's' para si ");
        fflush(stdin);
        scanf("%c", &yes);
    }

    return i;
}

void mostramelo(int arr[], int val)
{
    int i=0;
    printf("Los datos del arreglo son: \n");
    while(i<val)
    {
        printf("|%i|",arr[i]);
        i++;
    }
    printf("\n\n\n");
}

int sumador (int arr[], int val)
{
    int i=0;
    int suma=0;
    while(i<val)
    {
        suma= arr[i]+ suma;
        i++;
    }
    return suma;
}

void copipila(int arr[], Pila *dada, int val)
{
    int i=0;
    if(pilavacia(dada))
    {
        while(i<val)
        {
            apilar(dada, arr[i]);
            i++;
        }
    }
    else
    {
        printf("\n\nla pila tiene elementos\n\n");
    }
}

float sumaran(float arr[], int dim)
{
    int i=0;
    srand(time (NULL));
    while(i<dim)
    {
        arr[i] = rand()%100+1;
        i++;
    }
    return i;
}

void verflo(float arr[], int val)
{
    int i=0;
    printf("Los datos del arreglo son: \n");
    while(i<val)
    {
        printf("|%.2f|",arr[i]);
        i++;
    }
    printf("\n\n\n");
}

float sumadores (float arr[], int val)
{
    int i=0;
    float suma=0;
    while(i<val)
    {
        suma= arr[i]+ suma;
        i++;
    }
    return suma;
}

char menor(char arr[],int val, char dato)
{
    int i=0;
    int flag=0;
    while(flag==0 && i<val)
    {
        if(arr[i]== dato)
        {
            flag=1;
        }
        else
        {
            i++;
        }
    }
    return flag;
}

char chargador(char arr[], int dim)
{
    int i=0;
    char yes = 's';
    while(i<dim && yes == 's'|| yes == 'S' )
    {
        printf("\nElija el caracter que desee cargar al arreglo: ");
        fflush(stdin);
        scanf("%c", &arr[i]);
        i++;
        printf("\ndesea agregar alguno mas? presione 's' para si ");
        fflush(stdin);
        scanf("%c", &yes);
    }
    return i;
}

void insertainador(char arr[],int val, char dato)
{
    int i = val;
    while(i>=0 && dato< arr[i])
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=dato;
}

void cordenainador(char arr[], int val)
{
    int i=0;
    val--;
    while(i<val)
    {
        insertainador(arr, i,arr[i+1]);
        i++;
    }
}

char percha(char arr[],int val)
{
    int i=0;
    printf("Los datos del arreglo son: \n");
    while(i<val)
    {
        printf("|%c|",arr[i]);
        i++;
    }
    printf("\n\n\n");
}

char mayonesa(char arr[], int val)
{
    int i = 0;
    percha(arr,val);
    char dato;
    dato = arr[i];
    while(i<val)
    {
        if(dato<=arr[i])
        {
            dato = arr[i];
            i++;
        }
        else
        {
            i++;
        }
    }
    return dato;
}

int neuquen(int arr[], int val)
{
    int i=0;
    int u = val-1;
    int flag=1;
    int ahre[val];
    while(i<val)
    {
        ahre[u] = arr[i];
        i++;
        u--;
    }
    i=0;
    while(flag==1 && i<val)
    {
        if(arr[i]!=ahre[i])
        {
            flag=0;
            i++;
        }
        else
        {
            i++;
        }
    }
    return flag;
}

void copybara(int arr[], int val)
{
    int i, ante, bajo, div, u;
    div=val/2;
    u=val-1;
    i=0;
    ante=0;
    bajo=0;

    while(i<div)
    {
        ante=arr[i];
        bajo=arr[u];
        arr[i]=bajo;
        arr[u]=ante;
        i++;
        u--;
    }
}

void j1j2(char arr[], int val)
{
    int a;
    int i=0;
    val--;
    char aux;
    while(i<val)
    {
        a=ilegales(arr, i, val);
        aux= arr[a];
        arr[a]=arr[i];
        arr[i]= aux;
        i++;
    }
}

char ilegales(char arr[], int i, int val)
{
    char menore=arr[i];
    int posmenor= i;
    int u= i+1;
    val++;
    while(u<val)
    {
        if(menore>arr[u])
        {
            menore=arr[u];
            posmenor=u;
        }
        u++;
    }
    return posmenor;
}

void intercalainador (char c[], char a[], char b[], int val)
{
    int i=0;
    int u=0;
    int val2=val*2;
    while(i<val)
    {
      c[u]=a[i];
      u++;
      c[u]=b[i];
      u++;
      i++;
      percha(c, val2);
    }
}

int ggwp(int arr[], int val)
{
    int i=1;
    int total;

    while(i<val)
    {
        if(i!=0){
        total= arr[i] + arr[i-1];
        arr[i]= total;
        i++;
        }else{
        i++;
        }
    }
}
