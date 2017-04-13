#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

struct contestant{
    int no, problems,penalty;
    char madeit;
};

int main() {
    int n,a,b,d;
    char c;
    scanf("%d",&n);
    while(n--){
        vector<contestant> arr;
        int i=0;
        while(true){
            scanf("%d %d %d %c",&arr[i].no,&arr[i].problems,&arr[i].penalty,&arr[i].madeit);
            i++;
        }
    }

}