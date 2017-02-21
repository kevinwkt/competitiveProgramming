#include <iostream>
#include <stdio.h>

int main() {
    int a,b,c,d,t,con;
    con =1;
    scanf("%d",&a);

    while(a--){

        scanf("%d %d %d",&b,&c,&d);

         if(b>c){
             t=b;
             b=c;
             c=t;
         }
        if(b>d){
            t=b;
            b=d;
            d=t;
        }
        if(c>d){
            t=c;
            c=d;
            d=t;
        }
        printf("Case %d: %d\n",con,c);
        con++;

    }

}