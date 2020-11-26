#include <stdio.h>

int main (void){
	
	int a ;int b;
	a=3;b=5;
	
	a+b; a-b; a*b; a/b;
	
	double thuong;
	
	thuong =(double) a/b;
	
	
	printf("a\t b\t a+b\t a-b\t a*b\t a/b\n");
	
	printf("%d\t %d\t %d\t %d\t %d\t %g",a,b,a+b,a-b,a*b,thuong);

    
	return 0;
}
