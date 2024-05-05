#include<stdio.h>
int MAX=8;

main()
{
    int row, space,star;
    for(row=1; row<=MAX /2; row++)
    {
        for(space=row; space <=MAX /2; space++)
        {
            printf("-");
        }
        for(star = 1; star <=row *2 -1; star++)
        {
            printf("*");
        }
        printf("\n");
    }


    for(row=MAX; row>=6; row--)
    {
        for(space=MAX; space>=row; space--)
        {
            printf("-");
        }
        for(star = 10; star <= row *2 -2; star++)
        {
            printf("*");
        }
        printf("\n");
    }

}

