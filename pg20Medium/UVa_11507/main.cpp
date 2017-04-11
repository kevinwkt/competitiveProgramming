#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
    int arr[8]{1,2,3,4,5,6,7,8};
    int maxindex=0;
    int maxno=0;

    for(int i=0;i< sizeof(arr)/ sizeof(arr[0]);i++){
        if(arr[i]>=maxno) {
            maxno=arr[i];
            maxindex=i;
        }
    }
    printf("");
}