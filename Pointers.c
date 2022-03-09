#include <stdio.h>

int main ()
{
    int *p;
    int nlinhas;
    int count;

    printf("Indique o mero de linhas e colunas da matriz: ");
    scanf("%d", &nlinhas);

    int matrx[nlinhas][nlinhas];

    p = matrx[0];
    for(count = 1; count < 1+ nlinhas * nlinhas; count++)
        *p++ = count;

    p = matrx[0];
    for (int i = 0; i < nlinhas; i++)
    {
        for (count = 0; count < nlinhas; count ++)
        {
            printf(" %3d", *p++);
            p += nlinhas -1;
        }
        printf("\n");
        p = matrx[0]+i+1;
    }

    return( 0 );

}