#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);
    float x = (float)(-b) / a;
    printf("Nghiem cua phuong trinh = %.2F\n", x);
    return 0;

}