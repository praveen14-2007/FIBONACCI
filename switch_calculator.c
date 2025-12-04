#include <stdio.h>
int main() {
  int a, b, c, d;
    printf("the operation \n1.ADD\n2.SUB\n3.MULTI\n4.DIV\n5.remainder\n");
    printf("enter the operation (1-4) : ");
    scanf("%d",&a);
    printf("enter the numbers : ");
    scanf("%d%d",&b,&c);
    switch(a)
    {
    case 1: d = b+c;
        break;
        case 2: d=b-c;
        break;
        case 3: d=b*c;
        break;
        case 4: d=b/c;
        break;
        case 5: d=b%c;
        break;    
    default: printf("error");
        break;
    }
    printf("answer: %d",d);
    return 0;
}