#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr,int st,int ed, int mid){

    vector<int>temp;

    int i=st,j=mid+1;

    while(i<=mid && j<=ed){
        if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ed){
        temp.push_back(arr[j++]);
    }

    for(int k=0; k<temp.size() ;++k){
        arr[st+k]=temp[k];
    }

}

void rec(vector<int>&arr,int st,int ed){

    if(st<ed){
        int mid=st+(ed-st)/2;
        rec(arr,st,mid);
        rec(arr,mid+1,ed);
        merge(arr,st,ed,mid);
    }
}

int main(){

    vector<int>arr{5, 3, 8, 4, 2, 7, 1, 6};

    rec(arr,0,arr.size()-1);

    for(int i:arr){
        cout << i << " ";
    }
}