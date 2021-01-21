#include <stdio.h>

int main(void) {
  int n;
  printf("nhap so nguyen = ");
  scanf("%d",&n);
  int a[n];

  for(int i=0;i<n;i++){
    printf("NHAP A[%d]= ",i+1);
    scanf("%d",&a[i]);
  }
  printf("PHAN TU CUA MANG A: ");
  for(int i=0;i<n;i++){
    printf(" %d",a[i]);
  }
  int m, t = 0;
    printf("\nNhap so nguyen muon kiem tra: ");
    scanf("%d", &m);
    for(int i = 0; i < n; i++){
    if (a[i]==m) {
        t += 1;
 }
}
    if (t > 0){
  printf("Co ton tai ");
}
    else {
  printf("Khong ton tai");
}

  return 0;
}



  
