#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,n,cm,c;
    scanf("%d",&a);
    c=1;
    while(c<a+1){
        scanf("%d",&b);
        scanf("%d",&n);
        for (int i = 0; i <b-1 ; i++) {
            scanf("%d",&cm);
            if(cm>n) n=cm;
        }
        printf("Case %d: %d\n",c,n);
        c++;
    }
}
