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