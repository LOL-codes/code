#include <iostream>
#include <vector>
using namespace std;

void rec(string &x,int i){
    if(i==x.size()){
        cout << x << "\n";
        return;
    }

    for(int k=i; k<x.size(); ++k){
        swap(x[k],x[i]);
        rec(x,i+1);
        swap(x[k],x[i]);
    }
}

int main() {
    string x="abc";
    rec(x,0);
}

/////////////////////////////////////////////////////////////

//ADDING THE RESULT INTO A VECTOR

// #include <iostream>
// #include <vector>
// using namespace std;

// void rec(string &x,int i,vector<string>&ans){
//     if(i==x.size()){
//         ans.push_back(x);
//         return;
//     }

//     for(int k=i; k<x.size(); ++k){
//         swap(x[k],x[i]);
//         rec(x,i+1,ans);
//         swap(x[k],x[i]);
//     }
// }

// int main() {
//     vector<string>ans;
//     string x="abc";
//     rec(x,0,ans);

//     for( auto i:ans){
//         for(auto j:i){
//             cout << j;
//         }
//         cout << "\n";
//     }
// }