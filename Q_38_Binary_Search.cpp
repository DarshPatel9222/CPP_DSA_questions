#include <iostream>
using namespace std;

int main(){
    int a[]={12,13,18,25,38,42,56,78,86};
    int n=9;
    int target=42;
    int l=0;
    int h=n-1;

    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==target){
            cout<<"Found at index: "<<mid;
            return 0;
        }
        else if(a[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    cout<<"Not found";
    return 0;
}