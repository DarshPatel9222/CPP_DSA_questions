#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int n=6;
    sort(arr,arr+n);

    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }

        int l=i+1;
        int r=n-1;

        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==0){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                l++;
                r--;
                while(l<r && arr[l]==arr[l-1]){
                    l++;
                }
                while(l<r && arr[r]==arr[r+1]){
                    r--;
                }
            }
            else if(sum<0){
                l++;
            }
            else{
                r--;
            }
        }
    }
}