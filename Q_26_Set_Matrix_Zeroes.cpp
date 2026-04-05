#include<iostream>
using namespace std;

int main(){
    int mat[3][3]={
        {1,1,1},
        {1,0,1},
        {1,1,0}
    };

    int n=3,m=3;
    bool row[3]={false},col[3]={false};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                row[i]=true;
                col[j]=true;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                mat[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}