#include <iostream>
using namespace std;
using ll = long long;
bool dx (int a[],int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        if(a[l]!=a[r]) return false;
        ++l,--r;
    }
    return true;

}
int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n ;i++) cin>> a[i];
    if(dx(a,n)) cout<<"YES\n";
    else cout <<" NO\n"; 
}