#include <stdio.h>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>

using namespace std;

void printBetween(vector<int> v, int a, int b){
    set<int> st;
    for(int i=0;i<v.size();i++) if(v[i]>=a && v[i]<=b) st.insert(v[i]);

    for(auto it=st.begin();it!=st.end();it++) printf("%4d", *it);
    printf("\n");
}

int main(){
    vector<int> v = {1,3,8,2,4,6,10,15,13,3};
    int start,end;
    printf("Enter start and end numbers ");
    scanf("%d %d",&start, &end);

    printBetween(v, start, end);
}
