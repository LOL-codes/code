#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

int a=5,b=3;

int pos=0;

// int n=~(1<<pos); // first this will create a mask, like it creates a bit for a paricular postion 
//cout << (a & n); //it will invert the bits so if you do AND operation the particular bit will be zero

cout << (a & ~(1<<pos)); 

}