#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,temp;
    int aa,bb;
    while(1){
        cin>>a;
        if(a==0)return 0;
        cin>>b;
        bool cond=true;
        int ar[a];
        int arr[a];
        for (int i = 0; i <a ; ++i) {
            cin>>ar[i];
        }
        for (int j = 0; j <b ; ++j) {
            int dd=0;
            cin>>aa>>bb;
            for (int i = 0; i <aa ; ++i) {
                cin>>temp;
                for (int k = 0; k <a ; ++k) {
                    if(temp==ar[k])dd++;
                }
            }
            if(dd<bb) cond=false;
        }
        if(cond)printf("yes\n");
        else printf("no\n");
    }
}
