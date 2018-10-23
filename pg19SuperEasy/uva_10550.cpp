#include <iostream>
#include <stdio.h>

int main() {

    int a,b,c,d,tot;

    while(scanf("%d %d %d %d",&a,&b,&c,&d)&&(a||b||c||d)) {
        tot = 1080 + ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9;
        printf("%d\n", tot);
    }
}
