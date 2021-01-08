#include<stdio.h>

int main(){
	
	int a, b, c,d;
	a=1,b=2,c=3,d=4;
	printf("ban cuu chuong 2\n2x1=%d\n2x2=%d\n2x3=%d\n",b,d,b+d);
	printf("bang cuu chuong 3\n3x1=%d\n3x2=%d\n3x3=%d\n",c,d+b,c*c);
	printf("bang cuu chuong 4\n4x1=%d\n4x2=%d\n4x3=%d\n",d,b*d,c*d);

	return 0;
}	



#include <stdio.h>

int main(void) {
  int a=2,b=1;
  printf("bang cuu chương 2\n");
  for( b ; b <= 3; b++){
    printf("%d x %d = %d\n",a,b,a*b);
  }
  printf("bang cuu chương 3\n");
  a=3,b=1;
  for( b ; b <= 3; b++){
    printf("%d x %d = %d\n",a,b,a*b);
  }
  printf("bang cuu chương 4\n");
  a=4,b=1;
  for( b ; b <= 3; b++){
    printf("%d x %d = %d\n",a,b,a*b);
  }

  return 0;
}
