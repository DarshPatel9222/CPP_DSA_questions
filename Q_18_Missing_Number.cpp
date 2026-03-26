#include<iostream>
using namespace std;

int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=n*(n+1)/2;
    int actual=0;

    for(int i=0;i<n;i++){
        actual+=arr[i];
    }

    cout<<"Missing number: "<<sum-actual;
}