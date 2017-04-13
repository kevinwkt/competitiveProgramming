#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main() {

    int total,N,S,Q,tot,start,temp,temp1;
    bool flag;
    scanf("%d",&total);
    while(total--){
        scanf("%d %d %d",&N,&S,&Q);
        tot=0;
        start=0;
        stack<int> cargo;
        vector<queue<int>> country;
        for(int i=0;i<N;i++){
            country.push_back(queue<int>());
            scanf("%d",&temp);
            for(int j=0;j<temp;j++) {
                scanf("%d",&temp1);
                country[i].push(temp1-1);
            }
        }

        while(true){
            flag=true;
            while(!cargo.empty()&&(cargo.top() == start||country[start].size()<Q)){
                temp=cargo.top();
                cargo.pop();
                if(temp!=start) country[start].push(temp);
                tot++;
            }
            while(cargo.size()<S&&!country[start].empty()){
                temp=country[start].front();
                country[start].pop();
                cargo.push(temp);
                tot++;
            }
            for(int i=0;i<N;i++){
                if(country[i].size()!=0) {
                    flag=false;
                    break;
                }
            }
            if(flag&&cargo.empty()) break;
            if(start==N-1) start=0;
            else start++;
            tot+=2;
        }
        printf("%d\n",tot);
    }
}