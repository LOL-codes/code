#include <iostream>
#include <vector>
using namespace std;

void rec(vector<string>&map, string str,vector<string>&res,string ch, int i){
    if(i==str.length()){
        res.push_back(ch);
        return;
    }

    int dig=str[i]-'0';

    if(dig<=1){
        rec(map,str,res,ch,i+1);
        return;
    }

    for(int j=0; j<map[dig].size(); ++j){
        rec(map,str,res,ch+map[dig][j],i+1);
    }

    return;
}

int main() {
    vector<string>map(10);

    map={"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    string str="34";

    vector<string>res;

    rec(map,str,res,"",0);

    for(string i:res){ 
        cout << i << " ";
    }
}