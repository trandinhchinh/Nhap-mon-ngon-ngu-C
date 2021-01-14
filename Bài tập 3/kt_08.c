#include <stdio.h>

int main(void) {
  float a  , b ;
// nhap a, b tu ban phim
  printf("nhap so thuc a :");
  scanf("%f", &a);
  printf("nhap so thuc b :");
  scanf("%f", &b);
  float c = a * b;
  // xet dieu kien 
  if(c > 0){
    printf(" %.f va %.f cung dau", a, b);
    }else if( c < 0){
      printf(" %.f va %.f trai dau", a, b);
    }else{
      if(a == 0 && b == 0){
        printf("khong xac dinh vi a va b = 0");
    }else if(a == 0){
      printf("khong xac dinh vi a  bang khong");
      }else{
        printf("khong xac dinh vi b bang 0");
      }
    }  
  return 0;
}
