#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,min,max,t,tot;
    scanf("%d",&a);

    while(a--) {
        max=-1000000000;
        min=1000000000;
        scanf("%d", &b);
        for (int j = 0; j < b ; j++) {
            scanf("%d", &t);
            if (t > max) max = t;
            if (t < min) min = t;
        }
        tot = (max - min) * 2;
        printf("%d\n", tot);
    }
}
