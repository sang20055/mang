#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
using ll =long long;
bool nt (ll n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    ll  n; ll a[n];
    cin>>n;
    float chia =1;
    ll tong=0;
    ll dem=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if(nt(a[i])){
            dem++;
            tong+=a[i];
            chia= 1ll*(tong*1.0)/dem;
        }
    }
    cout << fixed << setprecision(3) << chia<<endl;
    
}