#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void lol(int x,int n){
    if(n==0){
        return;
    }
    lol(x,n-1);
    cout << x*n << " ";
}

int main(){

    lol(11,8);
}