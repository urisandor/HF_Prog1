#include <stdio.h>

int Haromszog()
{
    int a, b, c; 

    printf("Add meg a haromszog 1. oldalat: ");
    scanf("%d", &a);
    printf("Add meg a haromszog 2. odalat: ");
    scanf("%d", &b);
    printf("Add meg a haromszog 3. odalat: ");
    scanf("%d", &c);
    if (a + b > c || a + c > b || b + c > a)
    {
        printf("A haromszog letezik!\n");
    }
    else
    {
        printf("A haromszog nem letezik!\n");
    }
    
    return 0;
}

int main(){

    int result = Haromszog();
    
    return 0;
}