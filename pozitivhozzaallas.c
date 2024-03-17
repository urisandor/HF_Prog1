#include <stdio.h>
#include <stdlib.h>

void array_modosito(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        tomb[i] = abs(tomb[i]);
        printf("%d, ", tomb[i]);
    }
}
int main()
{
    int tomb[6] = {6, -4, 1, 8, -3, -9};
    int meret = 6;
    
    for (int i = 0; i < meret; i++)
    {
        printf("%d, ", tomb[i]);
    }
    puts("");
    array_modosito(meret, tomb);
    puts("");
    return 0;
}