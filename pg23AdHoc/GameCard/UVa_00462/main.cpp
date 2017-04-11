#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main() {
    char place,place1;
    string s;
    while(1){
        int s=0,h=0,d=0,c=0,max=0;
        vector<char> S;
        vector<char> H;
        vector<char> D;
        vector<char> C;
        int stopped[4]{0,0,0,0};
        if(scanf("%c",&place)!=1) return 0;
        if(place==' ') scanf("%c",&place);
        scanf("%c",&place1);
        printf("%c%c",place,place1);

        if(place1=='S') {
            S.push_back(place);
            s++;
        }
        if(place1=='H') {
            H.push_back(place);
            h++;
        }
        if(place1=='D') {
            D.push_back(place);
            d++;
        }
        if(place1=='C') {
            C.push_back(place);
            c++;
        }
        if(place=='A') {
            max+=4;
            if(place1=='S') stopped[0]=1;
            if(place1=='H') stopped[1]=1;
            if(place1=='D') stopped[2]=1;
            if(place1=='C') stopped[3]=1;
        }
        if(place=='K') max+=3;
        if(place=='Q') max+=2;
        if(place=='J') max+=1;

        for(int i=1;i<25;i++){
            scanf("%c",&place);
            if(place==' ') scanf("%c",&place);
            scanf("%c",&place1);
            if(place1=='S') {
                S.push_back(place);
                s++;
            }
            if(place1=='H') {
                H.push_back(place);
                h++;
            }
            if(place1=='D') {
                D.push_back(place);
                d++;
            }
            if(place1=='C') {
                C.push_back(place);
                c++;
            }
            if(place=='A') {
                max+=4;
                if(place1=='S') stopped[0]=1;
                if(place1=='H') stopped[1]=1;
                if(place1=='D') stopped[2]=1;
                if(place1=='C') stopped[3]=1;
            }
            if(place=='K') max+=3;
            if(place=='Q') max+=2;
            if(place=='J') max+=1;
        }
        for (int j = 0; j <S.size() ; ++j) {
            cout<<S[j]<<" ";
        }
        cout<<endl;
        for(int i=0;i< S.size();i++){
            if(S[i]=='K'&&S.size()<2)max-=1;
            else stopped[0]=1;
            if(S[i]=='Q'&&S.size()<3)max-=1;
            else if(S[i]=='Q'&&S.size()>3) stopped[0]=1;
            if(S[i]=='J'&&S.size()<4)max-=1;
        }
        for(int i=0;i< H.size();i++){
            if(H[i]=='K'&&H.size()<2)max-=1;
            else stopped[1]=1;
            if(H[i]=='Q'&&H.size()<3)max-=1;
            else if(H[i]=='Q'&&H.size()>3) stopped[1]=1;
            if(H[i]=='J'&&H.size()<4)max-=1;
        }
        for(int i=0;i< D.size();i++){
            if(D[i]=='K'&&S.size()<2)max-=1;
            else stopped[2]=1;
            if(S[i]=='Q'&&S.size()<3)max-=1;
            else if(S[i]=='Q'&&S.size()>3) stopped[2]=1;
            if(S[i]=='J'&&S.size()<4)max-=1;
        }
        for(int i=0;i< C.size();i++){
            if(C[i]=='K'&&C.size()<2)max-=1;
            else stopped[3]=1;
            if(C[i]=='Q'&&C.size()<3)max-=1;
            else if(C[i]=='Q'&&C.size()>3) stopped[3]=1;
            if(C[i]=='J'&&C.size()<4)max-=1;
        }
        printf("%d",max);
    }
}