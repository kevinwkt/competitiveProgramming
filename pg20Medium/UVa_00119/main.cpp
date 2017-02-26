#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>

using namespace std;

int main() {
    int a,amount,by,giving;
    string person;
    map<string,int> namecount;
    string str[10];
    bool cond=false;
    while(cin>>a){
        for (int i = 0; i <a ; i++) {
            cin>>str[i];
            namecount[str[i]]=0;
        }
        for(int j=0;j<a;j++){
            cin>>person>>amount>>by;
            if(by!=0) {
                namecount[person] = namecount[person] + (amount % by) - amount;
                for (int i = 0; i < by; i++) {
                    cin >> person;
                    namecount[person] = namecount[person] + (amount / by);
                }
            }
        }
        if(cond)printf("\n");
        for(int i=0;i<a;i++){
            cout<<str[i]<<" "<<namecount[str[i]]<<endl;
        }
        cond=true;
    }
}