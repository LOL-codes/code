#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string rec(string &s,int i,char c){

    if(i==s.length()) return "";

    string r=rec(s,i+1,c);

    if(s[i]==c){
        return r;
    }

    return s[i]+r;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    string s="abcd";

    cout << rec(s,0,'c');
}