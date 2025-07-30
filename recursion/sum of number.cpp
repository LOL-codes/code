#include <iostream>
#include <vector>
using namespace std;

int f(int n){
    if(n>=0 && n<=9){
        return n;
    }
    return n%10+f(n/10);
}

int main(){
    int x=f(333);
    cout << x;
}