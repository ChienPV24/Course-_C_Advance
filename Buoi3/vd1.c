#include <stdio.h>

int main () 
{
    char a1 , a2 , a3 , a4 , a5;
    int b1, b2, b3, b4, b5;
    int x = 10;
    int *p = &x;
    printf("Gia tri cua con tro la: %d", *p);
    printf("Dia chi cua con tro la: %p", &x);
    // printf("Dia chi cua a1 la %d\n", &a1);
    // printf("Dia chi cua b1 la %d\n", &b1);
    // printf("Dia chi cua a2 la %d\n", &a2);
    // printf("Dia chi cua b2 la %d\n", &b2);
    // printf("Dia chi cua a5 la %d\n", &a5);
    printf("\n");
}