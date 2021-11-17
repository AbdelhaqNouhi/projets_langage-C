#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tab[10];
    int j;
    int i = 0;
    int x = 0;

        for(j = 0; j < 10; j++)
        {
            printf("please enter your number%d:", j+1);
            scanf("%d", &tab[j]);
        }
        for(j = 0; j < 10; j ++)
        {
            if(tab[j] == 2)
            {
                i++;
            }
            if(tab[j] == 4)
            {
                x++;
            }
        }

            printf("two is:%d\n",i);
            printf("four is:%d", x);

}

/*(tab[i] != '\0')    abdelhaq
    i++;
i--;
while(i <= 0)
{
    printf("%c", i)
    i--;
}
}
