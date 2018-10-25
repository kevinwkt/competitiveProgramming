#include<stdio.h>
#include<vector>
#include<unordered_set>

using namespace std;

int findSum(vector<int> v, int sum){
    unordered_set<int> st;
    for(int i=0;i<v.size();i++){
        if(st.find(sum-v[i])!=st.end()) return 1;
        else st.insert(v[i]);
    }
    return 0;
}

int main(){
    vector<int> v1 = {1,3,8,2,4,6,10,15,13,3};
    printf("Enter the sum you wish to find: ");
    int sum;
    scanf("%d",&sum);

    printf(findSum(v1,sum)?"Found a sum\n":"Did not find a sum\n");
}
