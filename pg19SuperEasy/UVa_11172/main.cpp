#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,c;

    scanf("%d",&a);
    for (int i = 0; i <a ; ++i) {
        scanf("%d %d",&b,&c);
        if(b==c) printf("=\n");
        if(b>c) printf(">\n");
        if(b<c) printf("<\n");
    }
}