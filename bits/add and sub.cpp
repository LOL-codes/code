#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int sum(int a,int b){

    while(b!=0){
        unsigned carry=a&b;
        a=a^b;
        b=carry << 1;
    }

    return a;
}

int sub(int a,int b){
    return sum(a,sum(~b,1)); //a-b=a+(-b) --> -b=~b-1
}

int main(){

  int a=2,b=11;

  cout << sum(a,b) << "\n";
    cout << sub(a,b);

}