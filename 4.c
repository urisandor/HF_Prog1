#include <stdio.h>


int main(){

    int szam = 0;
    int pozitiv = 0;
    do
    {
        printf("Adj meg szamot:");
        scanf("%d", &szam);
        if (szam > 0)
        {
            pozitiv++;
        }
        
        
    }
    while (szam != 0);
    
    printf("Pozitiv elemek szama: %d\n", pozitiv);


    return 0;
}