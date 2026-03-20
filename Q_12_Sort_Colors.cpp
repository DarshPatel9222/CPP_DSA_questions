#include<iostream>
using namespace std;

// Red=0
// White=1
// Blue=2

int main(){
    int arr[]={2,0,2,1,1,0};
    int n=6;
    int index=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[i],arr[index]);
            index++;
        }
    }

    for(int i=index;i<n;i++){
        if(arr[i]==1){
            swap(arr[i],arr[index]);
            index++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}