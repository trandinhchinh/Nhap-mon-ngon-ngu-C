//Khoi khai bao
#include<stdio.h>
int n;int s=0;int sc,sl,ko;//bien toan cuc
void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
void Dem_chan_le_0(int a[]);
 //khoi ham main
int main(){
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
// khoi dinh nghia ham
void Nhap_pt_mang(int a[]){
  for(int i=0;i < n ;i++){
    printf("nhap phan tu thu %d: ",i);
        scanf("%d", &a[i]);
}
}
void Hien_thi_pt_mang(int a[]){
    printf("mang a: ");
  for(int i=0; i < n; i++){
      printf(" %d",a[i]);
      }
}
void Hien_thi_tong_chan(int a[]){
for(int i=0;i<n;i++){
        if(a[i] % 2 == 0){ 
          s+=a[i];
        }
  }
  printf("\n tong = %d ",s);
}
void Dem_chan_le_0(int a[]){
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
  printf("\nso cac so chan trong mang a: %d ",sc);
  printf("\nso cac so le trong mang a: %d ",sl);
  printf("\nso luong so 0: %d ",ko);
}
