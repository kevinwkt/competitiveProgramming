#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,c,z,d;
    scanf("%d",&z);
    d=1;
    while(z--){
        scanf("%d %d %d",&a,&b,&c);
        
        if(a>20||b>20||c>20) printf("Case %d: bad\n",d);
        else printf("Case %d: good\n",d);
        d++;
    }
}
