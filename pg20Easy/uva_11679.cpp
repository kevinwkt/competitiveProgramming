#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int bankno,deben,a,b,c;
    bool flag;

    while(1){
        flag=true;
        scanf("%d %d",&bankno,&deben);
        if(bankno==0&&deben==0) return 0;
    
        int arr[bankno];
    
        for (int i = 0; i <bankno; i++) cin>>arr[i];
    
        for (int j = 0; j <deben ; j++) {
            scanf("%d %d %d",&a,&b,&c);
            arr[a-1]=arr[a-1]-c;
            arr[b-1]=arr[b-1]+c;
        }
    
        for(int i=0;i<bankno;i++) if (arr[i]<0) flag=false;
    
        if(flag)printf("S\n");
        else printf("N\n");
    }
}
