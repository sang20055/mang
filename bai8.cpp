#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int n;
    ll a[10000];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    bool found = true;
    for (int i=0;i<n;i++){
        if(a[i]%2==0 && i%2==0){
            cout<<a[i]<<" ";
            found = true;
        }
    }
    if(!found){
        cout<<"NONE";
    }
    return 0;
}