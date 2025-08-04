//combination sum I
#include <iostream>
#include <vector>
using namespace std;

void rec(vector<int>& arr, vector<int>& cur, vector<vector<int>>& ans, int t,int i) {
    if(t==0){
        ans.push_back(cur);
        return;
    }

    if(t<0 ||i==arr.size()) return;

    cur.push_back(arr[i]);
    rec(arr,cur,ans,t-arr[i],i);
    cur.pop_back();

    rec(arr,cur,ans,t,i+1);

}

int main() {
    vector<int> arr = {2,4};
    int t = 4; 

    vector<vector<int>> ans;
    vector<int> cur;

    rec(arr, cur, ans, t ,0);

    for (auto& v : ans) {
        cout << "{";
        for (int x : v) cout << x << " ";
        cout << "} ";
    }
  
}
/////////////////////////////////////////////////////////////////

//combinaiton sum II

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void rec(vector<int>& arr, vector<int>& cur, vector<vector<int>>& ans, int t,int st) {
//     if(t==0){
//         ans.push_back(cur);
//         return;
//     }

//     for(int i=st; i<arr.size(); ++i){

//         if(i>st && arr[i]==arr[i-1]) continue;
//         if(arr[i]>t) break;

//         cur.push_back(arr[i]);
//         rec(arr, cur, ans ,t-arr[i],i+1);
//         cur.pop_back();
//     }

// }

// int main() {
//     vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
//     int t = 8; 
//     sort(arr.begin(),arr.end());
//     vector<vector<int>> ans;
//     vector<int> cur;

//     rec(arr, cur, ans, t ,0);

//     for (auto& v : ans) {
//         cout << "{";
//         for (int x : v) cout << x << " ";
//         cout << "} ";
//     }
  
// }

///////////////////////////////////////////////////////////////

//combination sum III

// #include <iostream>
// #include <algorithm>
// #include <set>
// #include <vector>
// using namespace std;

// void rec(vector<int>& arr, int i, int target, vector<int>& current, set<vector<int>>& result) {
//     if (target == 0) {
//         result.insert(current);
//         return;
//     }

//     for (int j = i; j < arr.size(); j++) {
//         if (j > i && arr[j] == arr[j - 1]) continue;  // skip duplicates
//         if (arr[j] > target) break;

//         current.push_back(arr[j]);
//         rec(arr, j + 1, target - arr[j], current, result);
//         current.pop_back();
//     }
// }


// int main() {
//     vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
//     int target = 8;
//     sort(arr.begin(), arr.end());

//     set<vector<int>> result;
//     vector<int> current;

//     rec(arr, 0, target, current, result);

//     for (auto& comb : result) {
//         cout << "[ ";
//         for (int num : comb) cout << num << " ";
//         cout << "]\n";
//     }
// }