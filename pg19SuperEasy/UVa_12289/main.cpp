#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

    int a;
    string s;
    scanf("%d",&a);

    while(a--){
        int b=0;
        int bb=0;
        cin>>s;
        if(s.length()==5) printf("3\n");
        else{
            if(s[0]!='o') b++;
            if(s[0]!='t') bb++;
            if(s[1]!='n') b++;
            if(s[1]!='w') bb++;
            if(s[2]!='e') b++;
            if(s[2]!='o') bb++;

            if(b<=1) printf("1\n");
            else if(bb<=1) printf("2\n");
        }
        }
    }