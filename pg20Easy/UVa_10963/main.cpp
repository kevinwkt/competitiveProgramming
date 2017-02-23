#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,c,t1,t2;
    bool co;

    scanf("%d",&a);

    while(a--){
        co=true;
        scanf("%d",&b);
        scanf("%d %d",&t1,&t2);
        c=t1-t2;
        b--;
        while(b--){
            scanf("%d %d",&t1,&t2);
            if(c!=(t1-t2)) {
                co=false;
            }
        }

        if(co){
            printf("yes\n");
        }else printf("no\n");

        if(a!=0){
            printf("\n");
        }

    }
}