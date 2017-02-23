#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    string enter;
    int a,entry,cas,tot;
    int arr[100];
    scanf("%d",&a);
    while(a--){
        scanf("%d",&cas);
        tot=0;
        for (int i = 0; i <cas ; i++) {
            cin>>enter;
            if(enter=="LEFT") arr[i]=-1;
            else if(enter=="RIGHT")arr[i]=1;
            else if(enter=="SAME"){
                cin>>enter;
                scanf("%d",entry);
                arr[i]=arr[entry];
            }
        }

        for (int j = 0; j < ; ++j) {

        }
    }

}