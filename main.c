#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contarCaracteres(char frase[]);
void eliminarCaracteres(char frase[]);

int main()
{
    char frase[200];

    printf("Ingrese su frase: ");
    fflush(stdin);
    fgets(frase, 200, stdin);
    ordenarCaracteres(frase);
    eliminarCaracteres(frase);
    return 0;
}


void ordenarCaracteres(char frase[])
{
    int i;
    char aux;
    int j;
    int longi;
    longi = strlen(frase);
    for(i=0; i<longi; i++)
    {
        for(j=i+1; j<longi; j++)
        {
            if(frase[i]>frase[j])
            {
                aux=frase[i];
                frase[i]=frase[j];
                frase[j]=aux;

            }
        }

    }
    printf("%s",frase);
}

void eliminarCaracteres(char frase[])
{
    int i;
    int longi;
    longi = strlen(frase);

    for(i=0; i<longi; i++)
    {
        if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u')
            {
                frase[i]=NULL;
            }
    }
    printf("%s",frase);
}

