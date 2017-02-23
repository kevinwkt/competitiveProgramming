#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {

    int a,b,c,cant;
    double x,y;
    double entry;
    scanf("%d",&a);
    c=1;
    while(a--){
        x=0;
        y=0;
        scanf("%d",&b);
        for (int i = 0; i < b; ++i) {
            scanf("%lf",&entry);
            x=x+(((int)entry/30)+1)*10;
            y=y+(((int)entry/60)+1)*15;
        }
        if(x<y) printf("Case %d: Mile %d\n",c,(int)x);
        if(y<x) printf("Case %d: Juice %d\n",c,(int)y);
        if(x==y) printf("Case %d: Mile Juice %d\n",c,(int)x);
        c++;
    }
}