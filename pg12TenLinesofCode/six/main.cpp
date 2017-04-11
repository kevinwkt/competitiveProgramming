#define ALL(x) x.begin(), x.end()

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int L, v;
    scanf("%d %d", &L, &v);
    vector<int> lst(L);
    for (int i = 0; i < L; i++) scanf("%d",&lst[i++]);
    printf(binary_search(ALL(lst), v)?"In the list\n":"Not in the list\n");
}