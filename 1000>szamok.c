#include <stdio.h>

int main()
{
    int szum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            szum = szum + i;
        }
        
    }
    printf("%d\n",szum);

}