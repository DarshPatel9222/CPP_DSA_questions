#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int>freq;
    int maxFreq=0;
    int element=arr[0];

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]>maxFreq){
            maxFreq=freq[arr[i]];
            element=arr[i];
        }
    }

    cout<<"Highest Frequency Element: "<<element<<endl;
    cout<<"Frequency: "<<maxFreq<<endl;
}