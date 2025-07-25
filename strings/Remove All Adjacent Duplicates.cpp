#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    string ans="";

    for(char i:n){
        if(!ans.empty() && ans.back()==i){
            ans.pop_back();
        }
        else{
            ans.push_back(i);
        }
    }

    cout << ans;

}
