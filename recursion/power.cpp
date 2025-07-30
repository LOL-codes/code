//METHOD 1

#include <iostream>
#include <vector>
using namespace std;

int f(int x,int n){
    if(n==0){
        return 1;
    }
    return x*f(x,n-1);
}

int main(){
    int x=f(2,5);
    cout << x;
}

//METHOD 2

// #include <iostream>
// #include <vector>
// using namespace std;

// int f(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     if(n%2==0){
//         int r=f(x,n/2);
//         return r*r;
//     }
    
//     int r=f(x,(n-1)/2);
//     return x*r*r;

// }

// int main(){
//     int x=f(2,5);
//     cout << x;
// }