#include <stdio.h>

int main(void) {
  int n;//khai báo 1 số nguyên n
  printf("nhap vao bang cuu chuong");// hiển thi ra màn hình bảng cửu chương được nhập từ bàn phím
  scanf("%d", &n);
   for(int i = 1; i <= n; i++){// đặt điều kiện hiển thị ra bảng nhân số ....
     printf("BẢNG NHÂN %d\n", i);
    for (int j = 0; j <= 10; j++){// đặt điều kiện hiển thị ra phép nhân trong bảng cửu chương
      printf("\t%d * %d = %d\n", i, j, i*j);
      } 
    }  
  return 0;
}
