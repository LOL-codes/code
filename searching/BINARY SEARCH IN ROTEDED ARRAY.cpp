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

        if(arr[st]<=arr[mid]){                 //checks for left sorted array
            if(arr[st]<=t && t<=arr[mid]){     //checking weather the target exist in left sorted array or not 
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{                                   //right sorted array
            if(arr[mid]<=t && t<=arr[ed]){      //checking weather the target exist in right sorted array or not 
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
