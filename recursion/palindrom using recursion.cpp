#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool rec(string &s,int st,int ed){
    if(st>=ed) return true;

    if(tolower(s[st])!=tolower(s[ed])) return false;

    return rec(s,st+1,ed-1);

}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    string s="leeal";

    cout << boolalpha << rec(s, 0, s.size() - 1);
}