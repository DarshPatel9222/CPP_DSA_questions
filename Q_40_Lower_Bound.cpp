#include <iostream>
using namespace std;

int lowerBound(int arr[],int n,int target){
    int l=0,h=n-1;
    int ans=n;

    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]>=target){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,2,4,4,5,7};
    int n=6;
    int target=4;
    cout<<lowerBound(arr,n,target);
}