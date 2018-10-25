#include <stdio.h>


using namespace std;

int main(){
    printf("Give a number a and a number b, < a and power of 2: ");
    unsigned int a, b;
    scanf("%d %d",&a,&b);

    printf("%d\n",a&(b-1));
}
