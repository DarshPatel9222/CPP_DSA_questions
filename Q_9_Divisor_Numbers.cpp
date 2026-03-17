#include<iostream>
using namespace std;

int main(){
    int x=150;

    for(int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
}