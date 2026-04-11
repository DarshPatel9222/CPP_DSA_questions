#include<iostream>
using namespace std;

int main(){
    int arr[]={3,1,-2,-5,2,-4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int res[n];

    int pos=0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            res[pos]=arr[i];
            pos+=2;
        }
        else{
            res[neg]=arr[i];
            neg+=2;
        }
    }

    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}