#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,first,entry;
    bool u,d;

    scanf("%d",&a);
    printf("Lumberjacks:\n");
    while(a--){
        u=d=false;
        scanf("%d",&first);
        for (int i = 0; i <9 ; i++) {
            scanf("%d",&entry);
            if(first>entry)d=true;
            if(first<entry)u=true;
            first=entry;
        }
        if(d&&u) printf("Unordered\n");
        else printf("Ordered\n");
    }
}
