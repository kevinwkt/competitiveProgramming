#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n,m,max,compare,sum,count=1,maxi;
    bool blown;
    //bool first=true;
    while(1){
        scanf("%d %d %d",&n,&m,&max);
        if(n==0 && m==0 && max==0) return 0;
        blown=false;
        sum=0;
        maxi=0;
        int a[n];
        int value[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            value[i]=0;
        }
        for(int i=0;i<m;i++){
            cin>>compare;
            if(value[compare-1]==1){
                sum-=a[compare-1];
                value[compare-1]--;
            }else{
                value[compare-1]++;
                sum+=a[compare-1];
            }
            if(sum>max) {
                blown=true;
            }
            if(sum>maxi) maxi=sum;
        }
        //if(!first){
        //    printf("\n");
        //}
        if(blown) printf("Sequence %d\nFuse was blown.\n",count);
        else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n",count,maxi);
        printf("\n");
        count ++;
        //first=false;
    }

}