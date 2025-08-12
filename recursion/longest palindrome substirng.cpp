#include <iostream>
#include <vector>
using namespace std;

void rec(string s,int l,int r,int &bl,int &br){

    while(l>=0 && r<s.size() && s[l]==s[r]){
        --l,++r;
    }

    ++l,--r;

    if(r-l+1>br-bl+1){
        br=r;
        bl=l;
    }

}

int main() {

    string s="cbbd";

    int bl=0,br=0;

    for(int i=0; i<s.size(); ++i){

        //odd palindrome
        rec(s,i,i,bl,br);

        //even palindrome
        rec(s,i,i+1,bl,br);
    }

    cout << s.substr(bl,br);
}