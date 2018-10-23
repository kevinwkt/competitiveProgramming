#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    int a,count=1,b,bb,temp;
    string c;
    char c[1000005];
    bool cond;
    while (scanf("%s %d",c,&a)==2){
        printf("Case %d:\n",count);
        count++;
        for(int i=0;i<a;i++){
            scanf("%d %d",&b,&bb);
            cond=true;
            if(b>bb){
                temp=b;
                b=bb;
                bb=temp;
            }
            for(int j=b;j<bb;j++){
                if(c[j]!=c[j+1]) {
                    cond=false;
                    break;
                }
            }
            if(cond)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
