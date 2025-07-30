#include <iostream>
#include <algorithm>
using namespace std;

int lol(int a, int b){
    if(b>a){
        return lol(b,a);
    }
    if(b==0){
        return a;
    }
    return lol(b,a%b);    //largest number should always be in left side
}

int main(){
cout << lol(4,18);
}