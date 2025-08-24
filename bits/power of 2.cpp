#include <iostream>
#include <intrin.h>
using namespace std;

int main(){

int n=16;

if(n>0 && (n & (n-1))==0){
    cout << 1;
}
else{
    cout << 0; 
}


//power of two will exactly have 1 set bit so we will check with previous one and do & operation with that
//it will be zero if the number is a power of two
}