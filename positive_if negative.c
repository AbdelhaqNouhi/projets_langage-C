#include <stdio.h>
#include <stdlib.h>


int   main()
{
    int tab[100];
    int temp;
    int j;
    int i;
    i = 0;

    printf("entre votre nomber:");
    while(1)
    {
        scanf("%d", &temp);
        if(temp < 0)
            break;

        tab[i] = temp;
        i++;
    }

    for(j = 0; j < i ; j++)
        printf("%d \t",tab[j]);
}
