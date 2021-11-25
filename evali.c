#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int j;
    int k;
    printf("entre votre nombre:");
    scanf("%d", &n);

    if(n % 2 != 0)
    for(i = n; i > 0;i--)
    {
        for( j = i-1;j > 0;j-- )
        {
            printf(" ");
        }
        for(k = n; k > i;k--)
        {
            printf("*");
        }
        for(k = n; k > i-1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
