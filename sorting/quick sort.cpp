#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr,int st,int ed){
    
    int idx=st-1;
    int p=arr[ed];

    for(int i=st; i<ed; ++i){
        if(arr[i]<=p){
            ++idx;
            swap(arr[idx],arr[i]);
        }
    }

    swap(arr[idx+1],arr[ed]);

    return idx+1;
}

void rec(vector<int>&arr,int st,int ed){

    if(st<ed){
        int piv=partition(arr,st,ed);
        rec(arr,st,piv-1);
        rec(arr,piv+1,ed);
    }
}

int main(){

    vector<int>arr{5, 3, 8, 4, 2, 7, 1, 6};

    rec(arr,0,arr.size()-1);

    for(int i:arr){
        cout << i << " ";
    }
}