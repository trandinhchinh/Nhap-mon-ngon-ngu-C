#include <stdio.h>
int main(){
  //khai bao bien a =5 vs b=5
  int a = 5, b = 5;
  char pt;
  //hien thi ra man hinh
  printf ("vui long nhap phep tinh ");
  //nhap tu ban phim
  scanf ("%c",&pt);
  // cau lenh swwitch de su dung phep tinh
  switch(pt) {
     case '+': printf (" a + b = %d",a +b);
      break;
  	 case '-': printf (" a - b = %d",a -b);
      break;
       
      default:
       printf(" nhap cong hoac tru ");
  }
  return 0;
} 
