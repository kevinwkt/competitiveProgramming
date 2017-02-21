#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int c=1;
    string s;

    while(1) {
        cin >> s;
        if (s == "*") return 0;

        if (s == "Hajj") printf("Case %d: Hajj-e-Akbar\n", c);
        if (s == "Umrah") printf("Case %d: Hajj-e-Asghar\n", c);
        c++;

    }

}