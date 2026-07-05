#include <bits/stdc++.h>
using namespace std;
bool prime(long long n){
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long long x;
        cin>>x;
        long long r;
        r=sqrt(x);
        if(r*r==x && prime(r)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}