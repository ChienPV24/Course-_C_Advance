#include <stdio.h>

// static int a1 = 10;

void my_Funtion1(void)
{
    static int a1 = 20;
    printf("a1 = %d", a1);
}

void my_Funtion2(void)
{
    int a1 = 40;
    printf("a1 = %d", a1);
}

int main ()
{
    my_Funtion1();
    my_Funtion2();
    // printf("\na1' = %d", a1);
    printf("\n");
}