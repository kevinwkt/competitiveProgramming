#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int a,last;
    string s;

    scanf("%d",&a);

    for (int i = 0; i <a ; i++) {
        cin>>s;
        last=s.length();
        if(s=="1"||s=="4"||s=="78") printf("+\n");
        else if(s[last-1]=='5'&&s[last-2]=='3') printf("-\n");
        else if(s[0]=='9'&&s[last-1]=='4') printf("*\n");
        else if(s[0]='1'&&s[1]=='9'&&s[2]=='0') printf("?\n");
    }
}
