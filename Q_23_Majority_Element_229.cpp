#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,1,1,3,3,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int count = 1;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            if(count>n/3){
                cout<<arr[i-1]<<" ";
            }
            count=1;
        }
    }

    if(count>n/3){
        cout<<arr[n-1];
    }
}