#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    vector<ll> set1,set2;
    if(sum%2 == 0){
           ll rem = sum/2;
           
           for(ll i=n;i>=1;i--){
            if(i<=rem){
            set1.push_back(i);
            rem = rem - i;
            }
            else{
                set2.push_back(i);
            }
           }
              cout<<"YES"<<endl;
              cout<<set1.size()<<endl;
              for(int i=0;i<(int)set1.size();i++){
                      cout<<set1[i]<<" ";
              }
              cout<<endl;
              cout<<set2.size()<<endl;
              for(int i=0;i< (int)set2.size();i++){
                      cout<<set2[i]<<" ";
              }
              cout<<endl;

        }else{
        cout<<"NO"<<endl;
    }


          return 0;
}