#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    string s;
    int count=1;

    while(1){
        cin>>s;
        if(s=="#") return 0;
        if(s=="HELLO") printf("Case %d: ENGLISH\n",count);
        else if(s=="HOLA") printf("Case %d: SPANISH\n",count);
        else if(s=="HALLO") printf("Case %d: GERMAN\n",count);
        else if(s=="BONJOUR") printf("Case %d: FRENCH\n",count);
        else if(s=="CIAO") printf("Case %d: ITALIAN\n",count);
        else if(s=="ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n",count);
        else printf("Case %d: UNKNOWN\n",count);
        count++;
    }
}
