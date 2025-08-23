//METHOD 1

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>a{1,2,3,1};

    int ans=-1;

    for(int i=1; i<a.size()-1; ++i){
        if(a[i-1]<a[i] && a[i]>a[i+1]){
            ans=i;
        }
    }

    cout << ans;
}

//METHOD 2

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){

//     vector<int>a{1,2,3,1};

//     int i=0, j=a.size()-1;

//     while(i<j){
//         int m=(i+j)/2;

//         if(a[m]>a[m+1]){
//             j=m;
//         }
//         else{
//             i=m+1;
//         }
//     }

//     cout << i;
// }






//METHOD 3

// #include <iostream>
// #include <vector>
// using namespace std;

// int peak(vector<int>&arr){
//     int l=0,h=arr.size()-1;

//     while(l<=h){
//         int m=l+(h-l)/2;

//         if(m==0){
//             if(arr[m]>arr[m+1]){
//                 return 0;
//             }
//             else{
//                 return 1;
//             }
//         }
//         else if(m==arr.size()-1){
//             if(arr[m]>arr[m-1]){
//                 return m;
//             }
//             else{
//                 return m-1;
//             }
//         }
//         else{
//             if(arr[m]>arr[m+1] && arr[m]>arr[m-1]){
//                 return m;
//             }
//             else if(arr[m]>arr[m-1]){
//                 l=m+1;
//             }
//             else{
//                 h=m-1;
//             }
//         }
//     }

//     return -1;
// }

// int main(){

//     vector<int>arr{0,4,1,0};

//     cout << arr[peak(arr)];

// }