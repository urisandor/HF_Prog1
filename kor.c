#include <stdio.h>
#include <math.h>

int Kor()
{
    int r = 5;
    //double pi = 4. * atan(1.);
    do
    {
        printf("Add meg a kor sugarat: ");
        scanf("%d", &r);
        
    } while (r < 0);
    double terulet = M_PI * (r * r);
    double kerulet = 2 * r * M_PI;
    printf("A kor kerulete: %lf cm.\n",kerulet);
    printf("A kor terulete: %lf cm2.\n",terulet);
    return 0;
}

int main(){
    
    double result = Kor();
    //printf("%lf\n", result);
    return 0;
}