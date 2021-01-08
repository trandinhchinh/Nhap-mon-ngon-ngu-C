#include <stdio.h>

int main(void) {
 int n,a,s=0;
	printf("nhap so nguyen > 0: "); 
  scanf("%d",&n);
	a =n%10; 
	s+=a; n/= 10;
	a= n%10; 
	s+=a; n/= 10;
	a= n%10;
	s+=a;
	printf("%d",s);
	return 0;
}
