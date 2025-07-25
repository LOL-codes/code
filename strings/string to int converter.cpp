#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin,s);

        long long int r=0,sign=1;
        int i=0;
    while(i<s.length() && s[i]==' ') ++i;

    if(i<s.length() && (s[i]=='+'|| s[i]=='-')){
        sign=(s[i]=='+')?1:-1;
        ++i;
    }

    while(i<s.length() && isdigit(s[i])){
        r=r*10+(s[i]-'0');

        if(sign==1 && r>INT_MAX) return INT_MAX;
        if(sign==-1 && -r<INT_MIN) return INT_MIN;

        ++i;
    }

    cout << sign*r;

}