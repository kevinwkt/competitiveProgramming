#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int a,b,c,tot=0;
    string s;
    scanf("%d",&a);

    while(a--){
        cin>>s;
        if(s=="report"){
            printf("%d\n",tot);
        }else{
            cin>>b;
            tot+=b;
        }
    }
}
