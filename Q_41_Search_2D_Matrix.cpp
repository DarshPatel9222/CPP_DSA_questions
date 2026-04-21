#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][4],int m,int n,int target){
    int l=0,h=m*n-1;

    while(l<=h){
        int mid=(l+h)/2;
        int row=mid/n;
        int col=mid%n;

        if(matrix[row][col]==target){
            return true;
        }
        else if(matrix[row][col]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return false;
}

int main(){
    int matrix[3][4]={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    cout<<searchMatrix(matrix,3,4,3);
}