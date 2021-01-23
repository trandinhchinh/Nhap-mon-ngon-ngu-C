#include<stdio.h>
int a,b,c;// bien cuc bo khia bao a,b,c
int solonnhat();
int main(){
  printf("Nhap so a = ");
  scanf("%d",&a);//nhập số a từ ban phim
  printf("Nhap so b = ");
  scanf("%d",&b);//nhập số b từ ban phim
  printf("Nhap so c = ");
  scanf("%d",&c);//nhập số c từ ban phim
  solonnhat();// cho ra KQ số lớn nhất
  return 0;
}
int solonnhat(){//Giá trị trả về của hàm solonnhat()
  if(a>b &&a>c)//đk a>b và a>c
   printf("%d",a);//nếu a là số lớn nhất thì in ra man hình
   
 if (b>a&& b>c)
 printf("%d",b);//nếu b là số lớn nhất thì in ra man hình

 if (c>a&&c>b)
 printf("%d",c);//nếu c là số lớn nhất thì in ra man hình
 return 0;
}
