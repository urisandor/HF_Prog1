#include <stdio.h>


int main(){

    int szam = 0;
    int pozitiv = 0;
    int negativ = 0;
    do
    {
        printf("Adj meg szamot:");
        scanf("%d", &szam);
        if (szam > 0)
        {
            pozitiv++;
        }
        else if (szam < 0)
        {
            negativ++;
        }
        
        
        
    }
    while (szam != 0);
    
    printf("Pozitiv elemek szama: %d\n", pozitiv);
    printf("Negativ elemek szama: %d\n", negativ);

    return 0;
}