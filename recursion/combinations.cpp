#include <iostream>
#include <vector>
using namespace std;

void rec(vector<int>&arr, vector<int>&cur, vector<vector<int>>&res, int st, int k){

    if(cur.size()==k){
        res.push_back(cur);
        return;
    }

    for(int i=st; i<arr.size(); ++i){
        cur.push_back(arr[i]);
        rec(arr, cur, res ,i+1,k);
        cur.pop_back();
    }
}

int main() {

    vector<int>arr={1,2,3};
    vector<int>cur;
    vector<vector<int>>res;

    int k=2;

    rec(arr,cur,res,0,k);

    for(auto i:res){
        cout << "[";
        for(auto j:i){
            cout << j;
        }
        cout << "]";
    }
}

//////////////////////////////////////////////////////////////////////

// combinations with repetation without duplicates

// #include <iostream>
// #include <set>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void rec(vector<int>&arr, vector<int>&cur, set<vector<int>>&res, int st, int k){

//     if(cur.size()==k){
//         res.insert(cur);
//         return;
//     }

//     for(int i=st; i<arr.size(); ++i){

//         if(i>st && arr[i]==arr[i-1]) continue;

//         cur.push_back(arr[i]);
//         rec(arr, cur, res ,i,k);
//         cur.pop_back();
//     }
// }

// int main() {

//     vector<int>arr={1,1,2};
//     vector<int>cur;
//     set<vector<int>>res;

//     sort(arr.begin(),arr.end());

//     int k=2;

//     rec(arr,cur,res,0,k);


//     for(auto i:res){
//         cout << "[";
//         for(auto j:i){
//             cout << j;
//         }
//         cout << "]";
//     }
// }

///////////////////////////////////////////////////////////

// combinations with repetation

// #include <iostream>
// #include <vector>
// using namespace std;

// void rec(vector<int>&arr, vector<int>&cur, vector<vector<int>>&res, int st, int k){

//     if(cur.size()==k){
//         res.push_back(cur);
//         return;
//     }

//     for(int i=st; i<arr.size(); ++i){
//         cur.push_back(arr[i]);
//         rec(arr, cur, res ,i,k);
//         cur.pop_back();
//     }
// }

// int main() {

//     vector<int>arr={1,2,3};
//     vector<int>cur;
//     vector<vector<int>>res;

//     int k=2;

//     rec(arr,cur,res,0,k);

//     for(auto i:res){
//         cout << "[";
//         for(auto j:i){
//             cout << j;
//         }
//         cout << "]";
//     }
// }