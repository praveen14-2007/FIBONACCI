#include <stdio.h>
int main() {
  int a=10 ,b=20 ,temp;
  printf("before swaping a=%d b=%d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("after swaping a=%d b=%d",a,b);
  return 0;
}