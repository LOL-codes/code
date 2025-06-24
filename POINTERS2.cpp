/*

PASS BY REFERENCE

#include <iostream>
#include <vector>
using namespace std;

//using alias
void lol(int &a){
  a=20;
  cout << a<<endl;
}

//using pass by reference
void lo(int *a){
  *a=30;
  cout << *a <<endl;
}
int main(){
  int a=10;
  cout <<a <<endl;
  lol(a);
  lo(&a);

}
  */

///////////////////////////////////////////////////////////////////////////////
/*

POINTER ARTHEMATIC

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a=10;
    int *p=&a;

    //decrement
    cout << p << endl;//0xa4f65ffc64
    --p;
    cout << p << endl;//0xa4f65ffc60
    cout << "\n";

    //increment
    cout << p << endl;//0xa4f65ffc60
    ++p;
    cout << p << endl;//0xa4f65ffc64
    cout << "\n";

    //add
    cout << p << endl;
    p=p+2;//2int => 8byte
    cout << p;//0x479dffbcc

}
  */

  /////////////////////////////////////////////////////////////////////

/*

POINTERS ARTHEMATIC IN ARRAY

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};

    cout << *arr <<endl;//1
    cout << *(arr+1) <<endl;//2
    cout << *(arr+2) <<endl;//3
    cout << *(arr+3) <<endl;//4
    cout << *(arr+4) <<endl;//5
}
------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *p1=&arr[0];
    int *p2=p1+4;

    cout << p2-p1;//4
}
*/

/*

COMPAIRING POINTERS

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *p=&arr[0];
    int *q=&arr[4];

    cout << p << " " << q << endl;
    cout << (p<q) << endl;//1
    cout << (p>q);//0
}
*/