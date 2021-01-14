int main(void) {
// khoi tao bien
  int a, b, c;
  printf("nhap canh a :");
  scanf("%d", &a);
  printf("nhap canh b :");
  scanf("%d", &b);
  printf("nhap canh c :");
  scanf("%d", &c);
  if(a+b > c || a+c > b || b+c > a){
    printf("%d, %d, %d la ba canh cua tam giac", a, b, c);
  }else{
    printf("%d, %d, %d khong la ba canh cua tam giac", a, b, c);
  }    
     
  return 0;
}
