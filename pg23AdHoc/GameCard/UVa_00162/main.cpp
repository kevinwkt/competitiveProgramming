#include <iostream>
#include <stdio.h>
#include <deque>
#include <string.h>

using namespace std;

int main() {

    string s;
    deque<string> you;
    deque<string> dealer;

    for(int i=0;i<26;i++){
        cin>>s;
        you.push_front(s);
        cin>>s;
        dealer.push_front(s);
    }

    //for (int j = 0; j <26 ; ++j) {
    //    s=you.front();
    //    you.pop();
    //    cout<<s<<endl;
    //}


}