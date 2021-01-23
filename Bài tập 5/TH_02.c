#include<stdio.h>
int main(){
    int n;//khai bao bien n
    printf("Nhap so nguyen duong n:  ");
    scanf("%d",&n);//nhap so n tu ban phim
    int tong=0;//khai bao bien tong
    for(int i=1;i<=n;i++){
        tong+=i;//cong thuc tinh tong 
    } 
    printf("S = 1 + 2 +...+ %d",n);//in ra man hinh 
    printf("\nTong = %d",tong);//in ra so tong
  return 0;
}
