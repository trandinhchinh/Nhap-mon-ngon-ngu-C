#include <stdio.h>

int main(void) {
  int arr[4];
  int S = 0,i=0;
  for(i; i < 4; i++){
    printf("nhap mang :");scanf("%d", &arr[i]);
    S += arr[i];
    }
    printf("%d", S);
  return 0;
}
