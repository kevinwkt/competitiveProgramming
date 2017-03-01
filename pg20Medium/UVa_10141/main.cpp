#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a,b,count=1;
    string bestname;
    float bestcost,maxratio;
    float cost;
    int no;
    string s="idk",place;
    while(1){
        cin>>a>>b;
        if(a==0&&b==0) return 0;
        maxratio=0;
        getline(cin,place);
        for (int i = 0; i <a ; i++) {
            getline(cin,place);
        }
        for (int k = 0; k <b ; k++) {
            getline(cin,s);
            cin>>cost>>no;
            float ratio=no/a;
            if(ratio>maxratio){
                maxratio=ratio;
                bestcost=cost;
                bestname=s;
            }else if(ratio==maxratio){
                if(bestcost>cost){
                    bestcost=cost;
                    bestname=s;
                }
            }
            getline(cin,place);
            for (int j = 0; j <no ; j++) {
                getline(cin,place);
            }
        }
        printf("RFP #%d\n",count);
        cout<<bestname<<endl;
        count++;

    }
}