#include <stdio.h>

int main() {
    int a,b,t1,t0,t2;
    scanf("%d",&a);
    while(a--){
        int tot=0;
        scanf("%d",&b);
        while(b--){
            scanf("%d %d %d",&t1,&t0,&t2);
            tot=tot+(t1*t2);
        }
        printf("%d\n",tot);
    }
}