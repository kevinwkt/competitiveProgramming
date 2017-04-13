#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main() {
    int n,hash,val,lines,tot;
    double total;
    char car;
    string line;
    cin>>n;
    cin.ignore();
    while(n--){
        tot=0;
        cin>>hash;
        cin.ignore();
        map<char,int> mp;
        while(hash--){
            cin>>car>>val;
            cin.ignore();
            mp[car]=val;
        }
        cin>>lines;
        cin.ignore();
        for (int i = 0; i < lines; i++) while ((car = cin.get()) != '\n') if (mp.count(car)) tot += mp[car];
        total=(double)tot/100.0;
        printf("%.2lf$\n",total);
    }
    return 0;
}