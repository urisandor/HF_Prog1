#include <stdio.h>

int main()
{
    int ossz = 0;
    int i = 1;
    while (i <101)
    {
        ossz = ossz + i;
        i++;
    }
    
    printf("A szamok osszege:%d\n", ossz);

}