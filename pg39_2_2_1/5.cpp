#include <stdio.h>
#include <vector>
#include <unordered_set>
#include <set>
#include <algorithm>

using namespace std;

void longestContiguous(vector<int> v){
    int startlen = 1;
    int max = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]>v[i-1]) startlen++;
        else startlen = 1;
        if(startlen>max) max=startlen;
    }
    printf("Length of longest increasing contiguous sub-array: %d\n",max);
}

int main(){
    vector<int> v = {1,3,8,2,4,6,10,15,13,3};
    longestContiguous(v);
}
