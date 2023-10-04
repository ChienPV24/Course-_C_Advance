#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct SinhVien
{
	char name[50];
	char id[50];
    double diem;
    char lop[50];
};

typedef struct SinhVien sv;

void in(sv a)
{
    printf("Ho va ten: %s\n", a.name);
    printf("Ma SV: %s\n", a.id);
    printf("Diem: %.2f\n", a.diem);
    printf("Lop: %s\n", a.lop);
}

int main () 
{
    sv a;
	printf("Nhap ho va ten SV: ");
    // scanf(" %[^\n]s", a.name);
    fgets(a.name, sizeof(a.name), stdin);
    a.name[strlen(a.name) - 1] = '\0';
    printf("Nhap ma SV: ");
    scanf("%s\n", a.id);
    // getchar();
	printf("Nhap diem: ");
    scanf("%lf\n", &a.diem);
    printf("Nhap lop SV: ");
    scanf("%s\n", a.lop);
    in(a);
	return 0;
}


