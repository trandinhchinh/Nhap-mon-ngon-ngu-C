#include<stdio.h>

int main(){
    int n;
    //khai bao bien n
    printf("Nhap n:");
    //nhap du lieu tu ban phim
    scanf("%d", &n);
    //dieu kien cua n
    int i;
    for( i = 1; i <= n; i++){
    	int a;
       for( a= 1; a <= n; a++) printf(" ");
       int b;
       for( b = 1; b <= i; b++) printf("%d",b);
        printf("\n");
    }
    return 0;
}
