#include<iostream>
using namespace std;
int main(){
    
    string s;
    getline(cin,s);
    int n = s.length();
    int currLen = 1; int res = 1;
    for(int i=1;i<n;i++){
           if(s[i] == s[i-1]){
                currLen++;
           }else{
            currLen = 1;
           }
           res = max(currLen,res);

    }

    cout<<res<<endl;

 

}