#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter total element of fibonnaci series:";
    cin>>x;
    int arr[x];

    for(int i=0;i<x;i++){
        if(i==0){
            arr[i]=0;
        }
        else if(i==1){
            arr[i]=1;
        }
        
        else{
            arr[i]=arr[i-1]+arr[i-2];
        }
    }

    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}