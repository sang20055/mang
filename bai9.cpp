#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int n,x;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
cin>>x;
int cnt=0;
for (int i=0;i<n;i++){
    for (int j=i;j<n;j++){
        if(a[i]+a[j]==x){
            ++cnt;
        }
    }
}
cout<<cnt;
}
