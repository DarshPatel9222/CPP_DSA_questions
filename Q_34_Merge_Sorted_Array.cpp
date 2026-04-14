#include<iostream>
using namespace std;

int main(){
    int nums1[]={2,5,6,0,0,0};
    int nums2[]={1,2,3};
    int m=3,n=3;
    int res[m+n];
    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            res[k]=nums1[i];
            i+=1;
        }
        else{
            res[k]=nums2[j];
            j+=1;
        }
        k+=1;
    }

    while(i<m){
        res[k]=nums1[i];
        i+=1;
        k+=1;
    }

    while(j<n){
        res[k]=nums2[j];
        j+=1;
        k+=1;
    }

    for(int i=0;i<m+n;i++){
        cout<<res[i]<<" ";
    }
}