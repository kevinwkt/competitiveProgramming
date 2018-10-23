#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,d;
    d=1;
    while(1){
        scanf("%d",&a);
        if(a==0) return 0;
        int x,t,c;
        c=0;
        t=0;
        for(int i=0;i<a;i++){
            scanf("%d",&x);
            if(x>0 && x<100) c++;
            if(x==0) t++;
        }
        c=c-t;
        printf("Case %d: %d\n",d,c);
        d++;
   }
}
