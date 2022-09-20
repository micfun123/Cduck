#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char tempvar[105];


int main(){
    srand(time(NULL));
    while (1)
    {
        int r = rand() % 4 + 1;
        scanf("%s", tempvar);
        for (size_t i = 0; i < r; i++)
        {
            printf("quack ");
        }
        
    }
    printf("\n");
    
}