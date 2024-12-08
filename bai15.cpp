#include <iostream>
using namespace std;
using ll = long long;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]* a[1]<0 ) cout<<a[0]<<" ";
    for (int i=1;i<n-1;i++){
        if(a[i]*a[i-1] <0 ||  a[i]* a[i+1]<0 ){
            cout<<a[i]<<" ";
        }
    }
     if(a[n-1]*a[n-2]<0) cout<<a[n-1];
}