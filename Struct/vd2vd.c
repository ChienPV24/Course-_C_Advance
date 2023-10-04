#include <stdio.h>

typedef struct
{
    int a;
    long b;
    char c;
}data;
int main () 
{
    printf("%d", (int)sizeof(data));
}
