#include<iostream>
using namespace std;

int main(){
    int arr[]={4,1,2,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count==1){
            cout<<"Single number: "<< arr[i];
            break;
        }
    }
}