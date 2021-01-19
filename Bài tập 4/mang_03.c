#include <stdio.h>

int main(void) {
  int n,sc=0,sl=0,ko=0;
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
        if(a[i] % 2==0 &&a[i]>0){
        printf("%d ",a[i]);
        sc+=1;
        }
  }
       printf("\nso le tu mang a: ");
  for(int i=0;i<n;i++){
        if(a[i] % 2!=0){
        printf("%d ",a[i]);
        sl+=1;
    }
    }    
  for(int i=0;i<n;i++){
        if(a[i] ==0){
        ko+=1;
    }
  }
  printf("\nso cac so chan trong mang a:%d ",sc);
  printf("\nso cac so le trong mang a:%d ",sl);
  printf("\nso luong so 0: %d ",ko);
  return 0;
}
