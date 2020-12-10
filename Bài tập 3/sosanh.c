#include <stdio.h>

int main () {
	//khai bao a va b
	int a , b;
	printf (" nhap gia tri a\n");
	//nhap gia tri bat ki tu ban phim
	 scanf("%d", &a);
	 
	 printf (" nhap gia tri b\n");
	 scanf("%d", &b);
	//dieu kien if a>b
	if(a > b) {
    	printf("a>b");
	}
	//dieu kien so sanh 2 gia tri bang nhau
	 else if (a==b){
	 	printf("a = b");
	 }
	
	else{
		printf("a < b");
	}
	
	getchar();
	
	return 0;	 
}
