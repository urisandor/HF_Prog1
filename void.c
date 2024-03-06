#include <stdio.h>
char jel ='-';
int db = 0;
void orokin(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Cell\n");
    }
    
}
void vonal(int db)
{
    for (int i = 0; i < db; i++)
    {
       printf("%c", jel);
    }
}
int main()
{
    printf("Adj meg egy elvalaszto jelet:");
    scanf("%c", &jel);
    
    printf("Add meg az elvalaszto jel db-szamat:");
    scanf("%d", &db);
    
    vonal(db);

    printf("\n");
    orokin(3);
    
    printf("\n\n");
    return 0;
}