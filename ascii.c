#include <stdio.h>


int main(){

    char c;
    
    for (int i = 0; i <= 127; i++)
    {
        c = i;
        printf("%c , %d\n", c, (int)c);
    }
    


    return 0;
}