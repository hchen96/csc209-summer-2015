#include <stdio.h>

int gcd(int x, int y);

int main()
{
    int i;
    //what is %d is $d\n?
    for (i = 0; i < 20; i++) {
        printf("gcd of 12 and %d is %d\n", i, gcd(12,i));
    }

    return 0;
}

int gcd(int x, int y)
{
    int t;
    //wot...
    while (y) {
        t = x;
        x = y;
        y = t % y;
    }

    return x;
}

