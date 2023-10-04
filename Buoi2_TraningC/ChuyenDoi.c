#include <stdio.h>
#include <string.h>

void chuyenHe2sangHe10(char c[], int decimal)
{
    int length = strlen(c);
    for (int i = length - 1; i >= 0; i--)
    {
        int digit = c[i] - '0';
        decimal += digit << (length - i - 1);
    }
    printf("So sau khi doi la: %d", decimal);
}

void chuyenHe10sangHe2(int num)
{
    char c[10] = {0};
    int index = 0;
    for(int i = 7; i >= 0; i--)
    {
        c[index++] = (num>>i)&1;
    }
    for(int i = 0; i < index; i++)
    {
        printf("%d", c[i]);
    }
}
int main () {
    // char c[10];
    // int decimal = 0;
    // printf("Nhap day bit muon chuyen doi: ");
    // scanf("%s", c);
    // chuyenHe2sangHe10(c, decimal);
    int n = 10;
    chuyenHe10sangHe2(n);
    printf("\n");
}