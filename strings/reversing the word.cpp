#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    string ans;
    reverse(n.begin(),n.end());

    for(int i=0; i<n.length(); ++i){

        string w="";

        while(i<n.length() && n[i]!=' '){
            w+=n[i];
            ++i;
        }

        reverse(w.begin(),w.end());

        if(w.length()>0){
            ans+=w+" ";
        }

    }

    cout << ans;

}