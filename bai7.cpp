#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int n,x;
    cin>>n;
    ll a[10000];
    int dem =0;
    int ces=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]<x){
            ++dem;
        }
    }
    cout<<dem<<endl;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            ++ces;
        }
    }
    cout<<ces;

}
  