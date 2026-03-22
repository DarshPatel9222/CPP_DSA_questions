#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[temp]);
            temp++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}