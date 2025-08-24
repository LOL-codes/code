#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

int a=5,b=3;

cout << (a&b) << "\n";
cout << (a|b) << "\n";
cout << (a^b) << "\n";
cout << (~a) << "\n";      //If you’re printing ~x, then yes → ~4 = -5//If you’re using ~x inside AND/OR/XOR as a mask, then it’s just flipping the bits, nothing else matters.
cout << (a<<b) << "\n"; // add 0 to right side of a ,b times
cout << (a>>2) << "\n";

}