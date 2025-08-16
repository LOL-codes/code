#include <iostream>
#include <vector>
using namespace std;

void sel(vector<int>&arr){
    for(int i=0; i<arr.size()-1; ++i){
        int min=i;
        for(int j=i+1; j<arr.size(); ++j){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main(){

    vector<int>arr{5, 3, 8, 4, 2};

    sel(arr);

    for(int i:arr){
        cout << i << " ";
    }
}