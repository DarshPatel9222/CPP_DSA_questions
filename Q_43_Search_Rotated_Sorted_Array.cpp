#include <iostream>
using namespace std;

int search(int arr[],int n,int target){
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==target){
            return mid;
        }

        if(arr[l]<=arr[mid]){
            if(target>=arr[l] && target<arr[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        else{
            if(target>arr[mid] && target<=arr[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[]={4,5,6,7,0,1,2};
    int n=7;

    cout<<search(arr,n,0);
}