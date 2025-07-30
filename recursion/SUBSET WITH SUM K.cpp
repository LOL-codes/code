#include <iostream>
#include <vector>
using namespace std;

void subsetSumK(vector<int>& arr, int i, vector<int>& current, int sum, int K) {

    if(i==arr.size()){
        if(sum==K){
            for(int i:current) cout << i << " ";
            cout << endl;
        }
        return;
    }

    current.push_back(arr[i]);
    subsetSumK(arr,i+1,current,sum+arr[i],K);
    current.pop_back();

    subsetSumK(arr,i+1,current,sum,K);
}

int main() {
    vector<int> arr = {1, 2, 1};
    int K = 2;
    vector<int> current;
    subsetSumK(arr, 0, current, 0, K);
}


///////////////////////////////////////////////////////////////

//ADDING THE RESULT TO A VECTOR

// #include <iostream>
// #include <vector>
// using namespace std;

// void subsetSumK(vector<int>& arr, int i, vector<int>& current, int sum, int K,vector<vector<int>> &result) {

//     if(i==arr.size()){
//         if(sum==K){
//             result.push_back(current);
//         }
//         return;
//     }

//     current.push_back(arr[i]);
//     subsetSumK(arr,i+1,current,sum+arr[i],K,result);
//     current.pop_back();

//     subsetSumK(arr,i+1,current,sum,K,result);
// }

// int main() {
//     vector<int> arr = {1, 2, 1};
//     vector<vector<int>> result;
//     int K = 2;
//     vector<int> current;
//     subsetSumK(arr, 0, current, 0, K,result);

//     for(auto &i:result){
//         cout << "{";
//         for(int j:i){
//             cout << j << " ";
//         }
//         cout << "}";
//     }
// }

///////////////////////////////////////////////////////////////////

//COUNTING HOW MANY SUBSET ARE THERE WHOSE SUM IS K

// #include <iostream>
// #include <vector>
// using namespace std;

// int subsetSumK(vector<int>& arr, int i,  int sum, int K) {

//     if(i==arr.size()){
//         return (sum==K)?1:0;
//     }

//     int left=subsetSumK(arr,i+1,sum+arr[i],K);
//     int right=subsetSumK(arr,i+1,sum,K);

//     return left+right;


// }

// int main() {
//     vector<int> arr = {1, 2, 1};
//     int K = 2;
//     vector<int> current;
//     int result=subsetSumK(arr, 0, 0, K);

//     cout << result;
// }