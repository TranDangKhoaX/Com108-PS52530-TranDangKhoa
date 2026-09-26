#include <stdio.h>
int main() {
   float diemtrungbinh;
   int hanhkiem;
   printf("Nhap diem trung binh: ");
   scanf("%f", &diemtrungbinh);
   printf("Nhap hanh kiem (1: tot, 0: khong tot): ");
   scanf("%d", &hanhkiem);
   if (diemtrungbinh >= 8.0 && hanhkiem == 1){
      printf("Hoc sinh duoc hoc bong\n");
   } else {
      printf("Hoc sinh khong duoc hoc bong\n");

   }
   return 0;

}