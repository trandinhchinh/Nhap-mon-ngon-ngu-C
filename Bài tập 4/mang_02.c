#include <stdio.h>

int main(void) {
int n;
  printf("nhap so nguyen n > 0 : ");
  scanf("%d",&n);
  int a[n];
      for(int i=0;i < n;i++){
        printf("phan tu tu mang a: ");
        scanf("%d", &a[i]);
      }
      for(int i=0; i < n; i++){
      printf("\t %d",a[i]);
      }
      for(int i=0;i<n;i++){
        if(a[i] % 2==0){
        printf("\nso chan tu mang a: %d",a[i]);
    }
    }
  return 0;
}
