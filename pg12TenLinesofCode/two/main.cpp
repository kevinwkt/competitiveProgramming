#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    double pi=acos(-1);
    int n;
    printf("Enter the amount of decimal points\n");
    scanf("%d",&n);
    printf("%.*lf",n,pi);
}
