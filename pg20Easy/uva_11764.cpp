#include <iostream>
#include <stdio.h>

int main() {
    int a,b,left,high,low,first,entry,c;
    scanf("%d",&a);
    c=1;
    while(c<=a){
        scanf("%d",&b);
        left=b-1;
        high=0;
        low=0;
        scanf("%d",&first);
        while(left--){
            scanf("%d", &entry);
            if(entry>first) high++;
            if(entry<first) low++;
            first=entry;
        }
        printf("Case %d: %d %d\n",c,high,low);
        c++;
    }
}
