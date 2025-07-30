#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void lol(int n){
    if(n<1){
        return;
    }
    lol(n-1);
    cout << n << " ";
}

int main(){
    int a[]={1,0,2,3,8,5,4,3,5};
    lol(5);
}