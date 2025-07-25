#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    int fre[256]={0};

    for(int i=0; i<n.size(); ++i){
        ++fre[n[i]];
    }

    for(int i=0; i<256; ++i){
        if(fre[i]>0){
            cout << (char)i << "->" << fre[i] << "\n";
        }
    }
}