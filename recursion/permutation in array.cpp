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

//////////////////////////////////////////////////////////////

// Permutations in array with repitation

// #include <iostream>
// #include <vector>
// using namespace std;

// void rec(vector<int>& arr, vector<int>& cur, vector<vector<int>>& ans, int k) {
//     if (cur.size() == k) {
//         ans.push_back(cur);
//         return;
//     }

//     for (int i = 0; i < arr.size(); ++i) {
//         cur.push_back(arr[i]);         
//         rec(arr, cur, ans, k);         
//         cur.pop_back();               
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3};
//     int k = 3; 

//     vector<vector<int>> ans;
//     vector<int> cur;

//     rec(arr, cur, ans, k);

//     for (auto& v : ans) {
//         cout << "{";
//         for (int x : v) cout << x << " ";
//         cout << "} ";
//     }
// }

///////////////////////////////////////////////////////////////////

// Permutations in array with repitation without duplicates

// #include <iostream>
// #include <set>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rec(vector<int>& arr, vector<int>& cur, set<vector<int>>& ans, int k) {
//     if (cur.size() == k) {
//         ans.insert(cur);
//         return;
//     }

//     for (int i = 0; i < arr.size(); ++i) {
//         cur.push_back(arr[i]);         
//         rec(arr, cur, ans, k);         
//         cur.pop_back();               
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3};
//     set<vector<int>> ans;
//     vector<int> cur;
//     int k = 3; 
//     sort(arr.begin(),arr.end());

//     rec(arr, cur, ans, k);

//     for (auto& v : ans) {
//         cout << "{";
//         for (int x : v) cout << x << " ";
//         cout << "} ";
//     }
// }