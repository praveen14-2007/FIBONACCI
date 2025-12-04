#include <stdio.h>
int main() {
  int a=10 ,b=20 ,temp;
  printf("before swaping a=%d b=%d",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("\nafter swaping a=%d b=%d",a,b);
  return 0;
}