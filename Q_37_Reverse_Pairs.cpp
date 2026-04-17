#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,2,3,1};
    int n=5;
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>2*arr[j]){
                count++;
            }
        }
    }
    cout<<count;
}