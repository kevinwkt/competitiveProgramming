#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char c;
    bool cond=true;

    while(scanf("%c",&c)!=EOF){
        if(c==34&&cond){
            printf("``");
            cond=false;
        }else if(c==34&&cond!=true){
            printf("''");
            cond=true;
        }else{
            printf("%c",c);
        }
    }
}