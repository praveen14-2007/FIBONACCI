#include<stdio.h>
int main()
{
    int n,b,a;
    printf("Hi,Welcome to my calculator");
    printf("\n How will I help you?");
    printf("\n 1.addition");
    printf("\n 2.subtraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\n 5.modulus division");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Enter two numbers");
               scanf("%d%d",&a,&b);
               printf("your addition is:%d",a+b);
               break;
        case 2:printf("Enter two numbers");
               scanf("%d%d",&a,&b);
               printf("your subtraction is:%d",a-b);
               break;       
        case 3:printf("Enter two numbers");
               scanf("%d%d",&a,&b);
               printf("your multiplication is:%d",a*b);
               break;
        case 4:printf("Enter two numbers");
               scanf("%d%d",&a,&b);
               printf("your division is:%d",a/b);
               break;
        case 5:printf("Enter two numbers");
               scanf("%d%d",&a,&b);
               printf("your remainder is:%d",a%b);
               break;
       default:printf("Invalid calculation");
    }
    return 0;
}
