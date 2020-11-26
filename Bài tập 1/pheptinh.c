#include <stdio.h>
int main(void) {
  // khai bao bien a, b kieu int
  int a, int b;
  // khoi tao gia tri bien a,b
  a= 3;
  b= 5;
  int tong, hieu, tich;
  double thuong;
  tong = a + b;
  hieu = a - b;
  tich = a * b;
  thuong = (double)(a / b);
  printf("a + b = %d, a - b = %d, a * b = %d, a / b = %f", tong, hieu, tich, thuong);
  
  return 0;
}
