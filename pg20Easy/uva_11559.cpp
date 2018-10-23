#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int participants,budget,hotels,weeks,cpp,capacity,cost,mi;
    while(scanf("%d %d %d %d",&participants,&budget,&hotels,&weeks)==4){
        int arr[weeks];
        bool flag=false;
        cost=budget;
        for (int i = 0; i <hotels ; ++i) {
            scanf("%d",&cpp);
            for (int j = 0; j <weeks ; ++j) {
                scanf("%d",&capacity);
                if(capacity>=participants&&budget-(cpp*participants)>=0&&(cpp*participants)<cost){
                    cost=cpp*participants;
                    flag=true;
                }
            }
        }
        if(flag==false) printf("stay home\n");
        else printf("%d\n",cost);
    }
}
