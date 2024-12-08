#include<iostream>
#include <math.h>
using namespace std;
using ll = long long;
bool nt(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dem =0;
    for(int i=0;i<n;i++){
        if(nt(a[i])){
            cout<< a[i]<< ' ';
            ++dem;
        }
    }
    cout<<endl;
    cout<<dem<<endl;
}