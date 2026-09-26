#include <stdio.h>
#define PI 3.14159
int main() {
    float chieudaiHCN, chieurongHCN, r;
    float chuvi, dientich;
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieudaiHCN);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieurongHCN);
    chuvi = 2 *(chieudaiHCN + chieurongHCN);
    dientich = (chieudaiHCN * chieurongHCN);
    printf("Chu vi hinh chu nhat lal %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    chuvi = 2 * PI * r;
    dientich = PI *r *r;
    printf("Chu vi hinh tron la: %.2f\n", chuvi);
    printf("Dien tich hinh tron la: %.2f\n", dientich);
    return 0; 
}
