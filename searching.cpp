/*
BINARY SEARCH -> for binary search make sure the array is sorted

#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5,6,7,8};
    int size =sizeof(a)/sizeof(a[0]);
    int target=100,low=0,high=size-1,z=0;

    while (low<=high){

        int mid=(low+high)/2;

        if (target<a[mid]){
            high=mid-1;
        }

        else if(target>a[mid]){
            low=mid+1;
        }

        else{
            cout << "found it at index " << mid;
            z=1;
            break;
        }
    }

    if(z==0){
        cout << "not found";
    }
}
---------------------------------------------------------------

LINEAR SEARCH

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

-------------------------------------------------------------

BINARY SEARCH IN ROTEDED ARRAY

#include <iostream>
#include <vector>
using namespace std;

int lol(int arr[],int ed,int t){
    int st=0;

    while(st<=ed){
        int mid=st+(ed-st)/2;

        if(arr[mid]==t){
            return mid;
        }

        if(arr[st]<=arr[mid]){//checks for left sorted array
            if(arr[st]<=t && t<=arr[mid]){//checking weather the target exist in left sorted array or not 
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{//right sorted array
            if(arr[mid]<=t && t<=arr[ed]){//checking weather the target exist in right sorted array or not 
                st=mid+1;   
            }
            else{
                ed=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[]={4,5,6,7,0,1,2,3};
    int ed=sizeof(arr)/sizeof(arr[0])-1;
    int t=1;
    
    int ans=lol(arr,ed,t);
    cout << ans;
}
*/