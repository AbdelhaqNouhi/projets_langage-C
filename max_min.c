#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;

    printf("enter number :\n");
    scanf("%d", &i);

    printf("enter number :\n");
    scanf("%d", &j);

    if(i > j)
    {
        printf("your number is: %d", i);
    }
    else if(j > i)
    {
        printf("your number is: %d", j);
    }
        return 0;
}
