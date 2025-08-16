#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void count(vector<int>&arr,int n){

    int mx=INT_MIN;

    //finding the max element
    for(int i=0; i<n; ++i){
        mx=max(mx,arr[i]);
    }

    vector<int>fre(mx+1,0);
    vector<int>ans(n);

    //calculating the frequence
    for(int i=0; i<n; ++i){
        fre[arr[i]]++;
    }

    //calculating the cumulative frequence
    for(int i=1; i<=mx; ++i){
        fre[i]+=fre[i-1];
    }

    //sorting array
    for(int i=n-1; i>=0; --i){
        ans[--fre[arr[i]]]=arr[i];
    }

    //copying array
    for(int i=0; i<n; ++i){
        arr[i]=ans[i];
    }

    //printing the output array
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
}

int main(){
    
    vector<int>arr{5,2,3,2,1};
    int n=arr.size();

    count(arr,n);
}

///////////////////////////////////////////////////////////////////

//FOR ARRAY INCLUDING NEGATIVE NUMBERS

//#include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void count(vector<int>&arr,int n){

//     int mx=*max_element(arr.begin(),arr.end());
//     int mi=*min_element(arr.begin(),arr.end());

//     int range=mx-mi+1;

//     vector<int>fre(range,0);
//     vector<int>ans(n);

//     //calculating the frequence
//     for(int i=0; i<n; ++i){
//         fre[arr[i]-mi]++;
//     }

//     //calculating the cumulative frequence
//     for(int i=1; i<range; ++i){
//         fre[i]+=fre[i-1];
//     }

//     //sorting array
//     for(int i=n-1; i>=0; --i){
//         ans[--fre[arr[i]-mi]]=arr[i];
//     }

//     //copying array
//     for(int i=0; i<n; ++i){
//         arr[i]=ans[i];
//     }

//     //printing the output array
//     for(int i=0; i<n; ++i){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
    
//     vector<int>arr{-5, -10, 0, -3, 8, 5, -1, 10};
//     int n=arr.size();

//     count(arr,n);
// }