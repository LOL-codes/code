#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    string ans="";
    bool c=true;

    for(char s:n){
        if(s==' ' && ans.back()!=' '){
            ans+=s;
            c=true;
        }
        else{
            if(c && isalpha(s)){
                ans+=toupper(s);
                c=false;
            }
            else{
                if(isalpha(s)){
                    ans+=tolower(s);
                }
            }
        }
    }

    cout << ans;

}