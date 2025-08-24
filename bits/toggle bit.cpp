#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

int a=5,b=3;

int pos=3;

// int n=(1<<pos);//masking 
// cout << (a ^ n);//at give position it makes 0 to 1 and 1 to 0

cout << (a ^ (1<<pos));

}