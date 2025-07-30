#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void rec(vector<int> &arr,int st,int ed){
    if(st>=ed) return ;

    swap(arr[st],arr[ed]);

    rec(arr,st+1,ed-1);

}

int main(){ 

    vector<int> arr = {1, 2, 3, 4, 5};

    rec(arr,0,arr.size()-1);

    for(int i:arr){
        cout << i << " ";
    }

}