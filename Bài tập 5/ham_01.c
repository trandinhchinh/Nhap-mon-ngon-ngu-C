//khoi khai bao
#include <stdio.h>
void sum(int a, int b, int c);
//khoi ham main
int main(void) {
  int x=1, y=2,z=3;
  sum(x,y,z);
  return 0;
}
//khoi dinh nghia ham
void sum(int a, int b, int c){
  int d=a+b+c;
  printf("tong: %d",d);
}
