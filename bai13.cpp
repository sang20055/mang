#include <iostream>
#include <math.h>
using namespace std;
using ll= long long;
int nt(int n){
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
int tn(int n){
    int lat=0; int temp=n;
    while(n){
        int du =n%10;
        lat=lat*10+du;
        n=n/10;

    }
    if(lat==temp) return true;
    else return false;
}
int cp(int n){
    int c= sqrt(n);
    return c*c==n;
}
int tongngto(int n){
    int s=0;
    while (n){
        s+=n%10;
        n=n/10;
    }
    return nt(s);
}
int main(){
    int n; cin>>n;
    ll a[10000];
    int d1=0,d2=0,d3=0,d4=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if(nt(a[i]))d1++;
        if(tn(a[i]))d2++;
        if(cp(a[i]))d3++;
        if(tongngto(a[i]))d4++;
    }
    cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4;
}