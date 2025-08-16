#include <iostream>
#include <vector>
using namespace std;

void bubble(vector<int>&arr){
    for(int i=0; i<arr.size()-1; ++i){
        for(int j=0; j<arr.size()-i-1; ++j){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

int main(){

    vector<int>arr{5, 3, 8, 4, 2};

    bubble(arr);

    for(int i:arr){
        cout << i << " ";
    }
}