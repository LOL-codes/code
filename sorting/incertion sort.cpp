#include <iostream>
#include <vector>
using namespace std;

void inc(vector<int>&arr){

    for(int i=1; i<arr.size(); ++i){

        int k=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            --j;
        }

        arr[j+1]=k;
        
    }   
}

int main(){

    vector<int>arr{5, 3, 8, 4, 2};

    inc(arr);

    for(int i:arr){
        cout << i << " ";
    }
}