#include <stdio.h>
int main(){
  int a = 5, b = 5;
  char pt;
  printf ("vui long nhap phep tinh ");
  scanf ("%c",&pt);
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
