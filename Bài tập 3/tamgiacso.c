#include<stdio.h>

int main(){
    int n;
    //khai bao bien n
    printf("Nhap n:");
    //nhap du lieu tu ban phim
    scanf("%d", &n);
    //dieu kien cua n
    for(int i = 1; i <= n; i++){
       for(int a= 1; a <= n; a++) printf(" ");
       for(int b = 1; b <= i; b++) printf("%d",b);
        printf("\n");
    }
    return 0;
}
