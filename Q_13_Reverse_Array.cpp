#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0,e=n-1;

    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;

        s++;
        e--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}