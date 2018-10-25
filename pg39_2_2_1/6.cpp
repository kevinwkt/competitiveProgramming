#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {1,4,6,3,2,5,9,7,8};
    sort(v.begin(),v.end());

    printf("Median is : %d\n",v[v.size()/2]);
}
