#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int a,c,max;
    string arr[10];
    int ar[10];
    scanf("%d",&a);
    c=1;
    while(a--){
        max=0;
        for (int i = 0; i <10 ; i++) {
            scanf("%s %d",&arr[i],&ar[i]);
            if(max<ar[i]) max=ar[i];
        }
        printf("Case %d:\n",c);
        for (int j = 0; j <10 ; ++j) {
            if (ar[j]==max) printf("%s\n",arr[j]);
        }
        c++;
    }
    return 0;
}