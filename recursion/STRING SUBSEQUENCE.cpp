#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void rec(string &s,int i,string c){

    if(i==s.length()){
        cout << "\"" << c << "\"" << "\n";
        return;
    }

    rec(s,i+1,c);
    rec(s,i+1,c+s[i]);
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    string s="abc";

    rec(s,0,"");
}




// STRING SUBSEQUENCE RETURNING TO A VECTOR

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// using namespace std;

// vector<string> rec(string &s,int i,string c){

//     if(i==s.length()){
//         return {c};
//     }

//     vector<string>exclude=rec(s,i+1,c);
//     vector<string>include=rec(s,i+1,c+s[i]);

//     exclude.insert(exclude.end(),include.begin(),include.end());

//     return exclude;
// }

// int main(){

//     vector<int> arr = {1, 2, 3, 4, 5};
//     string s="abc";

//     vector<string>ans=rec(s,0,"");

//     for(string s:ans){
//         cout << "\"" << s << "\"" << " ";
//     }
// }
