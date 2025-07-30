#include <iostream>
#include <vector>
using namespace std;

void rec(vector<int> &x,int i){
    if(i==x.size()){
        for(int j:x){
            cout << j << " ";
        }
        cout << "\n";
        return;
    }

    for(int k=i; k<x.size(); ++k){
        swap(x[k],x[i]);
        rec(x,i+1);
        swap(x[k],x[i]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    rec(arr,0);
}


////////////////////////////////////////////////////

//ADDING RESULT INTO A VECTOR

// #include <iostream>
// #include <vector>
// using namespace std;

// void rec(vector<int> &x,int i,vector<vector<int>>&ans){
//     if(i==x.size()){
//         ans.push_back({x});
//         return;
//     }

//     for(int k=i; k<x.size(); ++k){
//         swap(x[k],x[i]);
//         rec(x,i+1,ans);
//         swap(x[k],x[i]);
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3};
//     vector<vector<int>>ans;
//     rec(arr,0,ans);

//     for(auto &i:ans){
//         cout << "{";
//         for(int j:i){
//             cout << j << " ";
//         }
//         cout << "}";
//     }
// }