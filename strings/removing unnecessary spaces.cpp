#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    string ans="";
    int i=0;

    //while(i<n.length() && n[i]!=' ') ++i;

    while(i<n.length()){
        if(n[i]!=' '){
            ans+=n[i];
        }
        else{
            if(!ans.empty() && ans.back()!=' '){
                ans+=' ';
            }
        }
        ++i;
    }

    cout << ans;
}
