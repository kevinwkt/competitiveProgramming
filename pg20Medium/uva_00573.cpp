#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    float a,b,c,d,progress;
    int count;
    bool cond;
    while(1){
        cond=false;
        scanf("%f %f %f %f",&a,&b,&c,&d);
        if(a==0) return 0;
        progress=0;
        count=1;
        float bb=(b*(d/100));
        while(1){
            progress+=b;
            if(progress>a){
                cond=true;
                printf("success on day %d\n",count);
                break;
            }else{
                progress-=c;
                b-=bb;
            }
            if(b<0) b=0;
            if(progress<0) break;
            count++;
        }
        if(!cond) printf("failure on day %d\n",count);
    }
}
