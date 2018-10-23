#include <stdio.h>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    printf("Enter the amount of numbers you will input\n");
    scanf("%d",&n);
    vector<int> arr(n);
    set<int> set;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++) set.insert(arr[i]);
    for (int i : set) printf("%d ",i);
}
