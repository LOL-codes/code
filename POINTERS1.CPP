#include <iostream>
#include <vector>
using namespace std;


int main(){
    int a=10;

    int *p=&a;//created a pointer which stores the address of a

    cout << p;//0xc7245ffe30
    cout << "\n" << *p;//10(dereference)
    cout << "\n" << &p;//address of p

    int **q=&p;//stores the address of pointer p

    cout << "\n" << q;//0x6e99fff888
    cout << "\n" << &q;//address of q
    cout << "\n" << **q;//10


    //NULL POINTER 

    int *r=NULL;
    cout << "\n" << r;//0

}