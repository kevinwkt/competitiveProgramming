#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v = {'A','B','C','D','E','F','G','H','I','J'};

int main(){
    int t = pow(2,20);
    for(int i=0;i<t;i++){
        for(int j=0;j<v.size();j++) if(i&(1<<j)) printf("%c",v[j]);
        printf("\n");
    }
}
