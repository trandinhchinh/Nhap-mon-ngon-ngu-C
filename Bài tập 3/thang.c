#include <stdio.h>
int main(){

  int thang;
  printf ("vui long nhap thang ");
  scanf ("%d", &thang);
  switch(thang) {
     case 2:
     printf ("28 ngay");
     break;
  case 4 :
     printf (" 30 ngay");
      break;
  case 6 :
     printf (" 30 ngay");
      break;
  case 9 :
     printf (" 30 ngay");
      break;
  case 11 :
     printf (" 30 ngay");
      break;
      default: 
       printf("31 ngay");
    
  }
 
  
  getchar();
  return 0;
}
