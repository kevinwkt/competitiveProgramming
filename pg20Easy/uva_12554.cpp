#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,jj,b,c;
    bool songdone=false;
    bool peopledone=false;
    scanf("%d", &a);
    char arr[a][100];
    char *ar[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to",
                      "Rujia", "Happy", "birthday", "to", "you"};
    for (int i = 0; i < a; i++) scanf("%s", &arr[i]);
    b=0;
    c=0;
    while(!songdone||!peopledone){
        songdone=false;
        printf("%s: %s\n",arr[b],ar[c]);
        b++;
        c++;
        if(b>=a){
            b=0;
            peopledone=true;
        }
        if(c==16){
            c=0;
            songdone=true;
        }
    }
    return 0;
}
