#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5,6,7,8};
    int size =sizeof(a)/sizeof(a[0]);
    int target=100,z=0;

    for(int i=0; i<size; ++i){
        if (a[i]==target){
            cout << "element fount at index " << i;
            z=1;
            break;
        }
    }
    
    if(z==0){
        cout << "not found";
    }
}