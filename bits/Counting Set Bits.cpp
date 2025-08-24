#include <iostream>
#include <intrin.h>
using namespace std;

int main(){

    //NAVIS METHOD

    int n=14;
    int c=0;

    while(n>0){
        c+=(n & 1);  // checking for the last bit
        n>>=1;  //right shifting by 1 [n>>=1 === n=n>>1]
    }

    cout << c;



    //Brian Kernighan’s Algorithm

    // int n=14;
    // int c=0;

    // while(n>0){
    //     n=n & (n-1);
    //     ++c;
    // }

    // cout << c;


    //BUILT IN FUNCTIONS

    // int n=14;

    // cout << __popcnt(n); //for normal int
    // cout << __popcnt64(n); //for long long int


}