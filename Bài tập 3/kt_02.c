#include <stdio.h>

int main(void) {
  //nhâp a, b, c từ bàn phím
  float a, b, c;
  printf("nhap he so bac 2 a:");
  scanf("%f", &a);
  printf("nhap he so bac 1 b:");
  scanf("%f", &b);
  printf("nhap he so tu do c:");
  scanf("%f", &c);
   //kiem tra he so
   if(a == 0){
     if(b == 0){
       printf(" Phuong trinh vo nghiem");
   }else{
     printf("phuong trinh co mot nghiem : x = %.f",(-c / b));
   }  
}
// tinh delta
float delta = b*b - 4*a*c;
float x1;
float x2;

//tinh nghiem
if(delta > 0){
  x1 = (float) ((-b + sqrt(delta)) / (2*a));
  x2 = (float) ((-b - sqrt(delta)) / (2*a));
  printf("phuong trinh co 2 nghiem là : x1 = %.f va x2 = %.f", x1, x2);
  }
  else if (delta == 0){
    x1 = (-b / (2*a));
    printf("phuong trinh co nghiem kep: x1 = x2 =%.f",x1);
    }else{
      printf("phuong trinh vo nghiem");
    }
return 0;
}
