#include <iostream>
#include <vector>
using namespace std;

int f(int n){
    if(n==0 || n==1){
        return n;
    }
    return f(n-1)+f(n-2);
}

int main(){
    for(int i=0; i<=10; ++i){
        cout << f(i) << " ";
    }
}