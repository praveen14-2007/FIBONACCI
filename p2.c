#include <stdio.h>
int main() {
    char N[100] ;
   long D,Y,L,A,s,M;
   printf("enter YOUR NAME:");
   fgets(N,100,stdin);
   printf("\nenter your date of birth:");
   printf("\ndate: ");
   scanf("%ld",&D);
   printf("\nmonth: ");
   scanf("%ld",&M);
   printf("\nyear: ");
   scanf("%ld",&Y);
   s=M+D+Y;
   L=s%9;
   A=2025-Y;
   printf("Hello!!  %s",N);
   printf("\nyou are born on:%ld",D);
   switch (M)
   {
   case 1:printf("januvary");
   break;
    case 2:printf("february");
    break;
   case 3:printf("MARCH");
   break;
   case 4:printf("April");
   break;
   case 5:printf("May");
   break;
   case 6:printf("JUNE");
   break;
   case 7:printf("july");
   break;
   case 8:printf("august");
   break;
   case 9:printf("september");
   break;
   case 10:printf("october");
   break;
   case 11:printf("november");
   break;
   case 12:printf("december");
   break;
   default:
    break;
  }
  printf("%ld",Y);
   printf("\nyour age is %ld",A);
   printf("\nyour lucky number is %ld",L);
   return 0;
}