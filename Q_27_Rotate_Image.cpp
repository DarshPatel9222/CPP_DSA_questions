#include<iostream>
using namespace std;

int main(){
    int mat[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int n=3;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            swap(mat[i][start],mat[i][end]);
            start++;
            end--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}