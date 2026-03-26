#include<iostream>
using namespace std;

int main(){
    int arr[]={10,8,30,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    bool temp=false;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at index: "<<i;
            temp=true;
            break;
        }
    }

    if(!temp){
        cout<<"Element not found";
    }
}