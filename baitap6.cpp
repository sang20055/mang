#include <iostream>
using namespace std;
using ll = long long;
int main(){
    ll tich=1;
    ll res =0;
    ll tongdu=1;
    ll tichdu;
    ll n;
    ll a[100000];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        res+=a[i];
        tongdu= 1ll *res%1000000007;
    }
    
    cout<<tongdu<<endl;
    for (int i=0;i<n;i++){
        tich=(tich*a[i])%1000000007;
        
    }
    tichdu=tich;
    cout<<tichdu;

}