#include<stdio.h>

int main()
{
    int h;
    //khai bao bien n và hien thi tu ban phim
    printf("Nhap n:");
    scanf("%d", &h);
    //kiem tra dieu kien cua n va in ra tam giac so
    for(int i = 1; i <= h; i++){
       for(int j = 1; j <= h - i; j++)
          printf(" ");
       for(int x = 1; x <= 2 * i - 1; x++)//2 * i - 1 (2 vs 1 là số cố định, i là số hàng )
          printf(" *");
        printf("\n");
    }
    return 0;
}
