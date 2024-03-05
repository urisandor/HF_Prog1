#include <stdio.h>


int main(){
    int vege = 0;
    printf("Adj meg egy vegpontot: ");
    scanf("%d", &vege);

    for (int i = 1; i < vege; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    


    return 0;
}