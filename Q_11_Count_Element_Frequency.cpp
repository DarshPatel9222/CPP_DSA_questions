#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,3,3,4,4,5,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }

    cout<<"Frequency of "<<x<<" = "<<count;
}