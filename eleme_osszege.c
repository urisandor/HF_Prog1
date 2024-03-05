#include <stdio.h>

int main()
{
    int szam = 0;
    int i = 0;
    do
    {
        printf("Adj meg szamot:");
        scanf("%d", &szam);
        i = szam + i;
        
    }
    while (szam != 0);
    
    printf("%d\n",i);


    return 0;
}
