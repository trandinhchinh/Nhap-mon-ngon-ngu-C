#include <stdio.h>

int main() {
	//khai bao bien 
	int thang;
	char pt;
	//hien thi ra man hinh
	printf("vui long nhap thang");
	//nhap tu ban phim
	scanf("%c", &thang);
	switch(thang){
		case '1': printf("31 ngay");break;
		
        case '2': printf("28 ngay");break;
        
		case '3': printf("31 ngay");break;
		
		case '4': printf("30 ngay");break;
		
		case '5': printf("31 ngay");break;
		
		case '6': printf("30 ngay");break;
		
		case '7': printf("31 ngay");break;
		
		case '8': printf("31 ngay");break;
		
		case '9': printf("30 ngay");break;
		
		case '10': printf("31 ngay");break;
		
		case '11':	printf("30 ngay");break;
		
		case '12': printf("31 ngay");break;
		
		default: printf("vui long nhap ngay thang");
	}

 	return 0;
}
