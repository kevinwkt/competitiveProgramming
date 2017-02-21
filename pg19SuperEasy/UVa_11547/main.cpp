#include <iostream>
#include <stdio.h>
#include <algorithm>

int main() {
    int d,t;
    scanf("%d",&d);
    while(d--){

        scanf("%d",&t);
        t=((((((t*567)/9+7492)*235)/47)-498)%100)/10;
        printf("%d\n",abs(t));

    }
}