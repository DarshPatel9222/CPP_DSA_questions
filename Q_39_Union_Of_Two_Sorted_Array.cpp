#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,4};
    int b[]={2,3,5};
    int n=3,m=3;
    int i=0,j=0;

    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<b[j]<<" ";
        j++;
    }
}