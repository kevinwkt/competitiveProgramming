#include <iostream>
#include <stdio.h>

int main() {
    int a,x,y,x1,y1;
    while(1){
        scanf("%d",&a);
        if(a==0) return 0;
        scanf("%d %d",&x,&y);
        for(int i=0;i<a;i++){
            scanf("%d %d",&x1,&y1);
            if(x1==x||y1==y){
                printf("divisa\n");
            }else if(x1>x){
                if(y1>y) printf("NE\n");
                else printf("SE\n");
            }else{
                if(y1>y) printf("NO\n");
                else printf("SO\n");
            }
        }
    }
}