#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pal(string s){
    string s1=s;
    reverse(s1.begin(),s1.end());

    return s==s1;
}

void dfs(string s,vector<string>&cur, vector<vector<string>>&res){
    if(s.length()==0){
        res.push_back(cur);
        return;
    }

    for(int i=0; i<s.length(); ++i){
        string p=s.substr(0,i+1);
        if(pal(p)){
            cur.push_back(p);
            dfs(s.substr(i+1),cur,res);
            cur.pop_back();
        }
    }
}


int main() {
    string s = "aab";
    vector<vector<string>> res;
    vector<string> cur;

    dfs(s, cur, res);

    for (auto& partition : res) {
        cout << "[ ";
        for (string& part : partition)
            cout << "\"" << part << "\" ";
        cout << "]\n";
    }
}