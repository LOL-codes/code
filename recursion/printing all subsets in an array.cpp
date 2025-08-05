#include <iostream>
#include <vector>
using namespace std;

void subsetSumK(vector<int>& arr, int i, vector<int>& current, vector<vector<int>> &result) {

    if(i==arr.size()){
        result.push_back(current);
        return;
    }

    current.push_back(arr[i]);
    subsetSumK(arr,i+1,current,result);
    current.pop_back();

    subsetSumK(arr,i+1,current,result);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result;
    vector<int> current;
    subsetSumK(arr, 0, current, result);

    for(auto &i:result){
        cout << "{";
        for(int j:i){
            cout << j << " ";
        }
        cout << "}";
    }
}

/////////////////////////////////////////////////////

//subset with duplicates 

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void subsetSumK(vector<int>& arr, int i, vector<int>& current, vector<vector<int>> &result) {

//     if(i==arr.size()){
//         result.push_back(current);
//         return;
//     }

//     current.push_back(arr[i]);
//     subsetSumK(arr,i+1,current,result);
//     current.pop_back();

//     int ind=i+1;
//     while(ind<arr.size() && arr[ind]==arr[ind-1]){
//         ++ind;
//     }

//     subsetSumK(arr,ind,current,result);
// }

// int main() {
//     vector<int> arr = {1, 2, 1};
//     vector<vector<int>> result;
//     vector<int> current;
//     sort(arr.begin(), arr.end());

//     subsetSumK(arr, 0, current, result);

//     for(auto &i:result){
//         cout << "{";
//         for(int j:i){
//             cout << j << " ";
//         }
//         cout << "}";
//     }
// }