#include<iostream>
using namespace std;

int main(){
    int mat[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n=3,m=3;
    int top=0,bottom=n-1;
    int left=0,right=m-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        top++;

        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
        }
    }
}