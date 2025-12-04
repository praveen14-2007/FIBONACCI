#include <stdio.h>
int main() {
    int a=0;
    printf("Book issued to student A. Issue number: %d\n",a);
    printf("Book issued to student B. Issue number: %d\n",++a);
    printf("Book issued to student C. Issue number: %d\n",++a);
    printf("Book issued to student D. Issue number: %d\n",++a);
    return 0;
}