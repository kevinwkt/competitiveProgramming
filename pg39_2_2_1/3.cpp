#include<stdio.h>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int findSum(vector<int> v, int sum){
    int startptr = 0, endptr = v.size()-1;
    while(startptr!=endptr){
        if(v[startptr]+v[endptr]==sum) return 1;
        if(v[startptr]+v[endptr]>sum) endptr--;
        else startptr++;
    }
    return 0;
}

int main(){
    vector<int> v1 = {1,3,8,2,4,6,10,15,13,3};
    sort(v1.begin(),v1.end());
    printf("Enter the sum you wish to find: ");
    int sum;
    scanf("%d",&sum);

    printf(findSum(v1,sum)?"Found a sum\n":"Did not find a sum\n");
}
