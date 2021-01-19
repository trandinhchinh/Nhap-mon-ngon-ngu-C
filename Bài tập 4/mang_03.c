#include <stdio.h>

int main(void) {
  //khai bao va nhap n 
  int n,sc=0,sl=0,ko=0;
  printf("nhap n= ");
  scanf("%d",&n);
  int a[n];

  for(int i=0;i < n ;i++){
    printf("nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
  }
  //hien thi cac phan tu cua mang a ra man hinh
    printf("mang a: ");
  for(int i=0; i < n; i++){
      printf(" %d",a[i]);
      }
      //hien thi ra man hinh so chan trong mang a
  printf("\nso chan tu mang a: ");

  for(int i=0;i<n;i++){
        if(a[i] % 2==0 &&a[i]>0){ // lay cac so chan trong mang a va loai cac so 0 trong man a
        printf("%d ",a[i]);
        sc+=1;
        }
  }
  // hien thi cac so le ra man hinh
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
  printf("\nso cac so chan trong mang a: %d ",sc);
  printf("\nso cac so le trong mang a: %d ",sl);
  printf("\nso luong so 0: %d ",ko);
  return 0;
}
