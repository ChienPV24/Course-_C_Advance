#include <stdio.h>

int sum;

int SUM(int a, int b){
    sum = a + b;
    return sum;
}

int main () {
    int x = 5, y = 10;
    SUM(x, y);
    printf("%d\n", sum);
}