#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,t;
    while(scanf("%d",&a)){
        if(a==0) return 0;
        t=0;
        while(1) {
            while (a != 0) {
                t = t + a % 10;
                a /= 10;
            }
            if(t/10==0) break;
            else{
                a=t;
                t=0;
            }
        }
        printf("%d\n",t);
    }

}