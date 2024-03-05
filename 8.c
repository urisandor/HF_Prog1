#include <stdio.h>

int main(){
    int vege = 0;
    printf("Adj meg egy vegpontot: ");
    scanf("%d", &vege);

    for (int i = 1; i <= 7 ; i++)
    {
       if (i % 2 != 0)
       {
            printf("%d\n", i);
       }

    }
    
    return 0;
}