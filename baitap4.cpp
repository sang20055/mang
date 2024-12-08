#include <iostream>
using namespace std;
using ll = long long;
bool check( ll n ){
    ll fibo[93];
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2;i<=92;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(int i=0;i<=92;i++){
        if(fibo[i]==n )return true;
    }
    return false;
}
int main(){
    int n; 
    cin>>n;
    ll a[100000];
    int dem=0;
    for (int i=0 ;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if(check(a[i])){
            ++dem;
            cout<<a[i]<<" ";
        }
    }
    if(dem==0){
        cout<<"NONE";
    }
}