#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,d,t;
    double b,c,monthly,carval,dd[101],ddd;

    while(1){

        scanf("%d %lf %lf %d",&a,&b,&c,&d);
        if(a<0) return 0;
        int j=0;

        for(int i=0;i<d;i++){
            cin>>t>>ddd;
            for(int j=t;j<101;j++){
                dd[j]=ddd;
            }
        }

        monthly=c/a;
        carval=(c+b)*(1-dd[0]);

        while(carval<c){
            j++;
            carval=carval*(1-dd[j]);
            c=c-monthly;
        }

        if(j==1) printf("1 month\n");
        else printf("%d months\n",j);

    }


}