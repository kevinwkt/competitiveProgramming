#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    string s;
    int a,count=1,b,bb,temp;
    //char c[1000000];
    string c;
    bool cond;
    while (getline(cin,c)){
        cin>>a;
        printf("Case: %d\n",count);
        for(int i=0;i<a;i++){
            cin>>b>>bb;
            cond=true;
            if(b>bb){
                temp=b;
                b=bb;
                bb=temp;
            }
            for(int j=b;j<bb;j++){
                if(c[j]!=c[j+1]) cond=false;
            }
            if(cond)printf("Yes\n");
            else printf("No\n");
        }
        count++;
        getline(cin,c);
    }
    return 0;
}