#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int a,previous,latter,calc;
    bool flag;
    while(scanf("%d",&a)!=EOF){
        a--;
        bool arr[a]={false};
        flag=true;
        scanf("%d",&previous);
        for(int i=0;i<a;i++){
            scanf("%d",&latter);
            calc=abs(previous-latter);
            if(calc>0&&calc<=a) arr[calc-1]=1;
            else flag=false;
            previous=latter;
        }
        for(int i=0;i<a;i++) if(arr[i]!=1) flag=false;
        printf(flag?"Jolly\n":"Not jolly\n");
    }
    return 0;
}
