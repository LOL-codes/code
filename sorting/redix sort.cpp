#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void count(vector<int>&arr,int n,int exp){


    vector<int>fre(10,0);
    vector<int>ans(n);

    //calculating the frequence
    for(int i=0; i<n; ++i){
        fre[(arr[i]/exp)%10]++;
    }

    //calculating the cumulative frequence
    for(int i=1; i<10; ++i){
        fre[i]+=fre[i-1];
    }

    //sorting array
    for(int i=n-1; i>=0; --i){
        ans[--fre[(arr[i]/exp)%10]]=arr[i];
    }

    //copying array
    for(int i=0; i<n; ++i){
        arr[i]=ans[i];
    }
}

void redix(vector<int>&arr,int n){

    int mx=*max_element(arr.begin(),arr.end());

    for(int exp=1; mx/exp>0; exp*=10){
        count(arr,n,exp);
    }

}

int main(){
    
    vector<int>arr{170, 45, 75, 90, 802, 24, 2, 66};
    int n=arr.size();

    redix(arr,n);

    for(int i:arr) cout << i << " ";
}