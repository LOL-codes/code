#include <iostream>
#include <vector>
using namespace std;

void f(int x[],int i,int n){

    if(i==n){
        return;
    }

    cout << x[i] << " ";
    
    return f(x,i+1,n);
}

int main(){
    int x[]={1,2,3,4,5};
    f(x,0,5);
}