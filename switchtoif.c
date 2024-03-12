#include <stdio.h>

int get_int()
{
    int x = 0;
    printf("Adj meg egy helyezest: ");
    scanf("%d",&x);
    if (x > 3)
    {
        printf("Nincs ilyen helyezes!\n");
    }
    else if (x <= 0)
    {
        printf("Nincs ilyen helyezes!\n");
    }
    else if (x == 3)
    {
        printf("Harmadik helyezet!\n");
    }
    else if (x == 2)
    {
        printf("Masodik helyezet!\n");
    }
    else if (x == 1)
    {
        printf("Elso helyezet!\n");
    }
    return 0;
}

int main(){

    int result = get_int();
    
    return 0;
}