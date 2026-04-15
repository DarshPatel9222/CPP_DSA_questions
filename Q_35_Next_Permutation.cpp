#include <iostream>
using namespace std;

bool found=false;
bool printed=false;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

bool isEqual(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void permute(int arr[],int index,int n,int original[]){
    if(printed){
        return;
    }

    if(index==n){
        if(found&&!printed){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            printed=true;
            return;
        }

        if(isEqual(arr,original,n)){
            found=true;
        }
        return;
    }

    for(int i=index;i<n;i++){
        swap(arr[index],arr[i]);
        permute(arr,index+1,n,original);
        swap(arr[index],arr[i]);
    }
}

int main(){
    int arr[]={1,2,3};
    int original[]={1,2,3};
    int n=3;
    sortArray(arr,n);
    permute(arr,0,n,original);

    if(!printed){
        sortArray(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
}