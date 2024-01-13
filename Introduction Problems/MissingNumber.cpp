#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int xorr = 0;
    for(int i=0;i < n-1;i++){
        xorr = xorr ^ arr[i];
       
    }
    for(int i=1;i<=n;i++){
        xorr = xorr ^ i;
    }
     
     cout<<xorr<<endl;

     return 0;

}