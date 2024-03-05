#include <stdio.h>


int main(){
    
    int szam1 = 0;
    int szam2 = 0;
    printf("Adj meg egy pozitiv egesz szamot:");
    scanf("%d", &szam1);
    printf("Adj meg egy pozitiv egesz szamot:");
    scanf("%d", &szam2);
    if (szam1 > szam2)
    {
        printf("%d > %d\n", szam1, szam2);
    }
    else if (szam1 < szam2)
    {
        printf("%d > %d\n", szam1, szam2);
    }
    else if (szam1 = szam2)
    {
        printf("%d = %d\n", szam1, szam2);
    }
    


    return 0;
}