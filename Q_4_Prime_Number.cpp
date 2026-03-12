#include<iostream>
using namespace std;

int main(){
    int x;
    bool prime=true;

    cin>>x;

    if(x<=1){
        prime=false;
    }

    for(int i=2;i<x;i++){
        if(x%i==0){
            prime=false;
            break;
        }
    }

    if(prime){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}