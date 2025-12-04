#include <stdio.h>
int main() {
    int a ;
    long b ;
    double c;
    printf("enter the values of a\n");
    scanf("%d",&a);
    printf("enter the values of b\n");
    scanf("%ld",&b);
    c = a/b*100 ;
    printf("the value of c = %f percentage",c);
    return 0;
}