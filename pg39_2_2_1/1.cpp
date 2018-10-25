#include<stdio.h>
#include<vector>
#include<unordered_set>

using namespace std;

int check(vector<int> v){
    unordered_set<int> st;
    for(int i=0;i<v.size();i++){
        if(st.find(v[i])!=st.end()) return 1;
        else st.insert(v[i]);
    }
    return 0;
}

int main(){
    vector<int> v1 = {1,3,8,2,4,6,10,15,13,3};
    vector<int> v2 = {1,3,8,2,4,6,10,15,13};

    printf(check(v1)?"Working\n":"Not Working\n");
    printf(check(v2)?"Not Working\n":"Working\n");

}
