#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    bool fre[256]={false};
    string r;

    for(int i=0; i<n.length(); ++i){
        char c=n[i];

        if(fre[c]==false){
            r+=c;
            fre[c]=true;
        }

    }

    cout << r;
}