#include <stdio.h>

int main(void) {
  int a[4];//khai bao mang a co 4 ngan
  a[0]=3;
  a[1]=5;
  a[2]=7;
  a[3]=2;
  // tinh tong cac phan tu cua mang a
  int tong = 0,i=0;
  for(; i <4; i++){
    tong += a[i];
    }
    printf("%d", tong);
  return 0;
}
