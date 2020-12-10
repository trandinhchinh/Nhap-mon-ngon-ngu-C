#include <stdio.h>
int main() {
	// khai bao bien
  int dongia,soluong,thanhtien;
  
  printf ("nhap don gia  = "); scanf("%d", &dongia);
    
  printf ("nhap so luong =  "); scanf ("%d", &soluong);
  
  if (soluong <5){ // so luong mua duoi 5
  thanhtien = dongia * soluong;
  printf("thanh tien \n"); printf("%d",thanhtien);
  }
  
  else if (soluong>=5){ // so luong mua tu 5 tro len
  	//giam gia 25% = 75/100
  thanhtien = (dongia*soluong)*75/100;
  	printf("thanh tien \n"); printf ("%d",thanhtien );
  }
  
  getchar ();
  return 0;
}
