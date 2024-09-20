#include <stdio.h>

int base()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 100; j++)
        {
            if (i > 5)
            {
                printf("\033[1;31m%c\033[0m", 219);
            }
            else if( i == 5 && j == 7)
            {
                printf("#");
            }
            else
            {
                printf("1");
            }
        }
    }
    return 0;
}

int main()
{
    base();
    return 0;
}