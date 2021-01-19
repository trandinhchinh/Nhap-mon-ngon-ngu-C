#include <stdio.h>

int main(void) {
  int n;
  printf("nhap n= ");
  scanf("%d",&n);
  int a[n];

  for(int i=0;i < n ;i++){
    printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
  }
    printf("mang a: ");
  for(int i=0; i < n; i++){
      printf(" %d",a[i]);
      }
  printf("\nso chan tu mang a: ");
  for(int i=0;i<n;i++){
        if(a[i] % 2==0){
        printf("%d ",a[i]);
    }
    } 
  printf("\nso le tu mang a: ");
  for(int i=0;i<n;i++){
        if(a[i] % 2!=0){
        printf("%d ",a[i]);
    }
    }    
  return 0;
}
