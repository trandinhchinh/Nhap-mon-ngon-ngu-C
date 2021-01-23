#include<stdio.h>
float a,b,c;// bien cuc bo khia bao a,b,c
float solonnhat();
int main(){
  printf("Nhap so a = ");
  scanf("%f",&a);//nhập số a từ ban phim
  printf("Nhap so b = ");
  scanf("%f",&b);//nhập số b từ ban phim
  printf("Nhap so c = ");
  scanf("%f",&c);//nhập số c từ ban phim
  solonnhat();// cho ra KQ số lớn nhất
  return 0;
}
float solonnhat(){//Giá trị trả về của hàm solonnhat()
  if(a>b &&a>c)//đk a>b và a>c
   printf("%g",a);//nếu a là số lớn nhất thì in ra man hình
   
 if (b>a&& b>c)
 printf("%g",b);//nếu b là số lớn nhất thì in ra man hình

 if (c>a&&c>b)
 printf("%g",c);//nếu c là số lớn nhất thì in ra man hình
 return 0;
}
