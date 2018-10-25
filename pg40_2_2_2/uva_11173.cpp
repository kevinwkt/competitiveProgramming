#include <stdio.h>

using namespace std;

int main(){
    unsigned int a, b, c;
    scanf("%d",&a);
    while(a--){
        scanf("%d %d",&b,&c);
        printf("%d\n",c^(c>>1));
    }
}
