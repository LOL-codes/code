#include <iostream>
#include <algorithm>
using namespace std;

int lol(int n){
    if(n==0){
        return 0;
    }
    return lol(n-1)+(n%2==0?(-n):n);
}

int main(){
cout << lol(10);
}