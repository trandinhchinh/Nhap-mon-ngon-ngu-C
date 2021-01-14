#include <stdio.h>

int main(void) {
  int H, S, n , i;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  
  for( i = 1 ; i <= n; i++){
    if(i % 2 == 0)
    S += i;
  else if(i % 2 != 0)
    H += i;
  
  }
  printf("tong chan la %d tong le la %d", S, H);
  
  
  return 0;
}
