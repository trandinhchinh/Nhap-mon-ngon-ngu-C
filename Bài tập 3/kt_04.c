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


#include<stdio.h>
int main(){
    int n,s=0;
    printf("Nhap so nguyen > 0: ");
    scanf("%d",&n);
    for(;n!=0;){
        s=s+ n%10;
        n/= 10;
    }    
    printf("%d",s);
     return 0;
}


#include<stdio.h>
int main(){
    int n=123,s=0;
    printf("%d",n);
    while(n!=0){ 
        s=s+ n%10;
        n=n/10;
    }    
    printf("%d",s);
     return 0;
}
