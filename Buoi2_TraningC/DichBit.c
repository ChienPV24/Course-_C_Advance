#include <stdio.h>

int nhan2Mu(int n, int k){
    return n << k;
}

int chia2Mu(int n, int k){
    return n >> k;
}

int batBit(int *n, int k){
    return *n = *n | (1 << k);
}

int tatBit(int *n, int k){
    return *n = *n & (~ (1 << k));
}

int giaTribit(int n, int k){
    return ((n >> k) & 1);
}

void tapHopCon(int a[], int n)
{
    printf("ok\n");
    for (int i = 0; i < (1 << n); i++)
    {
        printf("{ ");
        for (int j = 0; j < 8; j++)
        {
            if (i & (1 << j))
            {
                printf("%d", a[j]);
                printf(" ");
            }
        }
        printf("}\n");
    }
}

// ham dem so luong bit 1 cua so nguyen
int cnt_bit_1 = 0;
int COUNT_bit_1(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        if(giaTribit(n, i)) cnt_bit_1++;
    }
    return cnt_bit_1;
}

int main () {
    // int n = 10, k = 2;
    // printf("So sau khi bat bit thu %d la %d\n", k, tatBit(&n, k));
    // for (int i = 7; i >= 0; i--){
    //     printf("%d", (n>>i)&1);
    // }
    // printf("Gia tri bit thu %d cua %d la %d", k, n, giaTribit(n, k));
    // printf("So luong bit 1 cua so %d la %d", n, COUNT_bit_1(n));
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d\n", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("Phan tu thu %d la: %d\n", i+1, a[i]);
    }
    tapHopCon(a, n);
    printf("\n");
    return 0;
}