#include <stdio.h>

int main (){
    char a = 10;
    for (int i = 7; i>=0; i--){
        printf("%d", (a>>i)&1);
    }
    printf("\n");
    return 0;
}