#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string rec(string &s,int i,string c){

    if(i>=s.length()) return "";

    if(s.substr(i,c.size())==c){
        return rec(s,i+c.size(),c);
    }

    return s[i]+rec(s,i+1,c);
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    string s="ababcabcabcx";

    cout << rec(s,0,"abc");
}