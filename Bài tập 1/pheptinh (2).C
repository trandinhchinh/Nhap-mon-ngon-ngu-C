#include <stdio.h>

int main (void){
	//khai bao bien a,b va gan a=3, b=5
	int a ;int b;
	a=3;b=5;
	
	a+b; a-b; a*b; a/b;
	
	//khai bao bien thuong
	double thuong;
	
	//ep kieu 
	thuong =(double) a/b;
	
	//in ra man hinh 
	printf("a\t b\t a+b\t a-b\t a*b\t a/b\n");
	
	//in ket qua ra man hinh
	printf("%d\t %d\t %d\t %d\t %d\t %g",a,b,a+b,a-b,a*b,thuong);

    
	return 0;
}
