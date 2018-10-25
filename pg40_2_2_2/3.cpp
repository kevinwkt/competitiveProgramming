#include <stdio.h>


using namespace std;

int main(){
    printf("Give a number: ");
    unsigned int a;
    scanf("%d",&a);

    printf("%d\n",a&(a-1));
}
