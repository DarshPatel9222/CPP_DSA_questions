#include<iostream>
using namespace std;

int main(){
    int arr[4][2]={{1,3},{2,6},{8,10},{15,18}};
    int n=4;

    int start=arr[0][0];
    int end=arr[0][1];

    for(int i=1;i<n;i++){
        if(arr[i][0]<=end){
            if(arr[i][1]>end){
                end=arr[i][1];
            }
        }
        else{
            cout<<"["<<start<<","<<end<<"] ";
            start=arr[i][0];
            end=arr[i][1];
        }
    }
    cout<<"["<<start<<","<<end<<"]";
}