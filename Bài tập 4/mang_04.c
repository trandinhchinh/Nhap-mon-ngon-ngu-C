#include <stdio.h>

int main(void) {
  //khai bao va nhap n 
  int n, tong =0;
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
      tong+=a[i];//tong=tong+a[i]
      }
      //hien thi tong ra man hinh
  printf("\ntong = %d",tong);
 
  return 0;
}
