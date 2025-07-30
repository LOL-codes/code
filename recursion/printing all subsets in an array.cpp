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
    vector<int> arr = {1, 2, 1};
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