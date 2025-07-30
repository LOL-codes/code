#include <iostream>
#include <algorithm>
using namespace std;

int lol(int a){
    if(a==0){
        return 0;
    }

    return (a%10)*(a%10)*(a%10)+(lol(a/10));
}

int main(){
cout << lol(407);
}