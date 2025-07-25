#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n,r;
    getline(cin,n);

    for(int i=0; i<n.size(); ++i){
        if(islower(n[i])){
            n[i]=toupper(n[i]);
        }
        else if(isupper(n[i])){
            n[i]=tolower(n[i]);
        }
    }

    cout << n;

}