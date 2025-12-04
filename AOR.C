#include <stdio.h>
int main() {
    //float l=22,b=7,area,per ;
    float l ,b , area,per ;
    printf("enter l&b values");
    scanf("%f%f",&l,&b);
    area= (l*b);
    per=2*(l+b);
    printf("area =%f",area);
    printf("perimeter = %f",per);
    return 0;
     
}