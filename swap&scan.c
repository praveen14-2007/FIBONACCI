#include <stdio.h>
int main() {
    int a , b ;
    printf("enter a and b");
    scanf("%d%d",a,b);
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("a = %d",a);
    printf("b = %d",b);
    return 0;
}