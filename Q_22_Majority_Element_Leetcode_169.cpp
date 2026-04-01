#include<iostream>
using namespace std;

int main(){
    int arr[]={2,2,1,1,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int freq=0;

        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }

        if(freq>n/2){
            cout<<"Majority Element: "<<arr[i];
            break;
        }
    }
}