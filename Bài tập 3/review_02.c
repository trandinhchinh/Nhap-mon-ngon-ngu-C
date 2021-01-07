#include <stdio.h>
int main(){
int a, b;
    char *s[] =
        {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    

    scanf("%d%d", &a, &b);

    for( ; a <= b; a++)
        puts((a < 10) ? s[a] : ((a % 2) ? "odd" : "even"));
    
    return 0;
    }
