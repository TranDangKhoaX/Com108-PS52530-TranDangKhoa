#include <stdio.h>
int main() {
    float diemToan, diemLy, diemHoa, diemTB;
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);
    diemTB =(diemToan + diemLy + diemHoa) / 3;
    printf("Diem trung binh la: %.2f\n", diemTB);
    return 0;

}
