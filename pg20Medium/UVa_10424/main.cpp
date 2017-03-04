#include <bits/stdc++.h>

using namespace std;

int main() {
    string first,second;
    int f,s;
    int temp;
    while(getline(cin,first)){
        getline(cin,second);
        f=0;
        s=0;
        temp=0;
        for(int i=0;i<first.length();i++){
            if (first[i] >='a' && first[i] <='z') f =f+ first[i] - 96;
            else if (first[i] >= 'A' && first[i] <= 'Z') f =f+ first[i] - 64;
        }
        for(int i=0;i<second.length();i++){
            if(second[i]>='a'&&second[i]<='z') s+=second[i]-96;
            else if(second[i]>='A'&&second[i]<='Z') s+=second[i]-64;
        }
        while(f>9||s>9) {
            while (f / 10 > 0) {
                temp =temp+ (f % 10);
                f =f/10;
            }
            temp =temp +(f % 10);
            f = temp;
            temp = 0;
            while (s / 10 > 0) {
                temp =temp+ (s % 10);
                s =s/10;
            }
            temp =temp +(s % 10);
            s = temp;
            temp=0;
        }
        if(s<f){
            float d=(float)s*100/(float)f;
            printf("%0.2f ",d);
            cout<<"%"<<endl;
        }else{
            float d=(float)f*100/(float)s;
            printf("%0.2f ",d);
            cout<<"%"<<endl;
        }
    }

}