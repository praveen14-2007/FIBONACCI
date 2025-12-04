//Program to implement FLAMES game in C Programming

// Header File

#include <stdio.h>
#include <string.h>

// Function to find out the flames result
void flame(char* a, char* b)
{
    int i, j, k, l = 1, n, m, sc = 0, tc, rc = 0, fc = 5;
    char f[] = "flames", c;

    n = strlen(a);
    m = strlen(b);
    tc = n + m;

    for (i = 0; i < n; i++) {
        c = a[i];
        for (j = 0; j < m; j++) {
            if (c == b[j]) {
                a[i] = -1;
                b[j] = -1;
                sc = sc + 2;
                break;
            }
        }
    }

    rc = tc - sc;

    for (i = 0;; i++) {
        if (l == (rc)) {
            for (k = i; f[k] != '\0'; k++) {
                f[k] = f[k + 1];
            }
            f[k + 1] = '\0';
            fc = fc - 1;
            i = i - 1;
            l = 0;
        }
        if (i == fc) {
            i = -1;
        }
        if (fc == 0) {
            break;
        }
        l++;
    }

    // Print the results
    printf("FLAMES RESULT: ");
    if (f[0] == 'f')
        printf("FRIEND");
    else if (f[0] == 'l')
        printf("LOVE");
    else if (f[0] == 'a')
        printf("AFFECTION");
    else if (f[0] == 'm')
        printf("MARRIAGE");
    else if (f[0] == 'e')
        printf("ENEMY");
    else
        printf("SIBLINGS");

}

// code start from here
int main()
{
    printf("Please Enter first name and second name one by one!!!\n");
    char a[30],b[30];
    printf("Enter First Name: ");
    fgets(a,100,stdin);
    printf("Enter Second Name: ");
    fgets(b,100,stdin);
    if(strcmp(a,b)!=0)  //comparing two strings are not same
        flame(a, b);
    else
        printf("Names are Same !!!"); //if two strings are same !!!
    return 0;
}
//program end