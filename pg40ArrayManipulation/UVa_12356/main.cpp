#include <iostream>
#include <stdio.h>

using namespace std;

struct linkelist{int right,left;};

int main() {
    int soldiers,testcase,limit1,limit2,leftpoint,rightpoint,temp;
    while(scanf("%d %d",&soldiers,&testcase)){
        if(!soldiers&&!testcase) return 0;
        linkelist arr[soldiers];
        for(int i=0;i<soldiers;i++) {
            arr[i].left=i-1;
            arr[i].right=i+1;
        }
        arr[soldiers-1].right=-1;
        while(testcase--){
            scanf("%d %d",&limit1,&limit2);
            limit1--;
            limit2--;
            if(arr[limit1].left>-1) arr[arr[limit1].left].right=arr[limit2].right;
            if(arr[limit2].right>-1) arr[arr[limit2].right].left=arr[limit1].left;

            if(arr[limit1].left>-1) printf("%d ",arr[limit1].left+1); else printf("* ");
            if(arr[limit2].right>-1) printf("%d\n",arr[limit2].right+1); else printf("*\n");
        }
        printf("-\n");
    }
}