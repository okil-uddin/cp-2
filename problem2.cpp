//  Count the number of segments of consecutive equal characters of a given string

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=1;
    for(int i=1; i<s.size();i++){
        if(s[i]!=s[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}