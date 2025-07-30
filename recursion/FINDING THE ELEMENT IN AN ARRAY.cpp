#include <iostream>
using namespace std;

bool lol(int arr[],int n,int i,int t){
    if(i==n){
        return false;
    }

    return (arr[i]==t) || lol(arr,n,i+1,t);
}

int main(){
    int arr[]={1,2,3,4,5};
    cout << lol(arr,5,0,2);
}