#include <stdio.h>
int main(){
	int s, n, sum = 0;//khai bao cac bien
	printf("Nhap so n:");
  	scanf("%d",&n);
	printf("n = %d\n",n);//in ra man hinh so vua nhap
  //chạy vòng lặp for từ  1 đến n
	for (s=1; s <= n; s++){
		sum = sum+s*s;
  }
  if (n == 1)
  printf("s=1^2= %d", sum );
  else if (n == 2)
  printf("s=1^2 + 2^2 = %d", sum );
  else
  printf("Tong = 1^2 + 2^2 +...+%d^2=%d",n,sum);
}
