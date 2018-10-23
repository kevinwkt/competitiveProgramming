#include <iostream>
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    
        scanf("%d %d",&b,&c);
        b=(int)b/3;
        c=(int)c/3;
        b=b*c;

        printf("%d\n",b);
    }
}
