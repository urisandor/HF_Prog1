#include <stdio.h>


int main(){

    int x;
    int y;

    printf("Adj meg egy x erteket: ");
    scanf("%d", &x);
    printf("Adj meg egy y erteket: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("%d > %d", x, y);
    }
    else if (x < y)
    {
        printf("%d < %d", x, y);
    }
    else 
    {
        printf("%d > %d", x, y);
    }
    printf("\n\n");
    return 0;
}