#include <stdio.h>

int Num_Old, Num_New;

void Print_Number(int num)
{
    printf("%d", num);
}
void Change_Number(int *a1, int *a2)
{
    *a1 = *a2;
}
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap1(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
}

int main () {
    Num_Old = 60;
    Num_New = 90;
    int a= 9, b = 8;
    // Swap(&Num_New, &Num_Old);
    // printf("NumNEW = %d\t NumOLD = %d", Num_New, Num_Old);
    // printf("\n");
    printf("Truoc khi hoan doi: a = %d b = %d\n", a, b);
    Swap(&a, &b);
    printf("Sau khi hoan doi: a= %d b = %d\n", a, b);

}