#include<iostream>
using namespace std;

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxSum=arr[0];

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>maxSum){
                maxSum=sum;
            }
        }
    }

    cout<<"Maximum Subarray Sum: "<<maxSum;
}