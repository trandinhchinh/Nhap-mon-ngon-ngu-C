#include <stdio.h>

int main () {
	//khai bao a va b
	int a , b;
	printf (" nhap gia tri a\n");
	//nhap gia tri bat ki tu ban phim
	 scanf("%d", &a);
	 
	 printf (" nhap gia tri b\n");
	 scanf("%d", &b);
	
	if(a > b) {
    	printf("a>b");
	}
	
	 else if (a==b){
	 	printf("a = b");
	 }
	
	else{
		printf("a < b");
	}
	
	getchar();
	
	return 0;	 
}
