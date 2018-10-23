#include <iostream>
#include <stdio.h>
#include <algorithm>

using  namespace std;

int main() {
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==-1&&b==-1) return 0;
        if(abs(b-a)<=50) printf("%d\n",abs(b-a));
        else printf("%d\n",100-abs(b-a));
    }
}
