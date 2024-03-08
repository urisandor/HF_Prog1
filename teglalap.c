#include <stdio.h>

int Terulet()
{
    int aoldal = 0;
    int boldal = 0;

    do
    {
        printf("Add meg a teglalap A oldalhosszat: ");
        scanf("%d", &aoldal);
        printf("Add meg a teglalap B oldalhosszat: ");
        scanf("%d", &boldal);
    } while (aoldal < 0 && boldal < 0);
    int terulet = aoldal * boldal;
    printf("%d cm2 a teglalap terulete.\n\n", terulet);
}
int Kerulet()
{
    int aoldal = 0;
    int boldal = 0;

    do
    {
        printf("Add meg a teglalap A oldalhosszat: ");
        scanf("%d", &aoldal);
        printf("Add meg a teglalap B oldalhosszat: ");
        scanf("%d", &boldal);
    } while (aoldal < 0 && boldal < 0);
    int kerulet = 2*aoldal + 2*boldal;
    printf("%d cm a teglalap kerulete.\n\n", kerulet);
}
int main(){

    int Tresult = Terulet();
    int Kresult = Kerulet();
    printf("%d", Tresult);
    printf("%d", Kresult);
    
    return 0;
}