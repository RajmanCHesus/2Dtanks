#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
            printf("\033[1;31m%c\033[0m" , 219);
        }
        
    }
    
    return 0;
}