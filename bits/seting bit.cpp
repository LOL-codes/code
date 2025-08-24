#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

int a=5,b=3;

int pos=3;

// int n=(1<<pos);// this will create a mask, like it creates a bit for a paricular postion 
// cout << (a|n); // it will add the original with the mask one

cout << ( a | (1<<pos) );

}