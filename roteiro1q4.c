#include <stdio.h>
#include <stdlib.h>

int main()

{

    int termo1, termo2, n, aux, i;

    termo1 = 0;
    termo2 = 1;
    aux = 0;

    printf("Digite o numero de termos: ");
    scanf("%d",&n);

    printf("%d",termo2);

    for(i=0; i < n - 1; i++)
    {
        aux = termo1 + termo2;
        termo1 = termo2 ;
        termo2 = aux;

        printf(" %d",aux);
    }

    return 0;


}
