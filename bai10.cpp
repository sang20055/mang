#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n,x;
cin>>n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
}
int cnt=INT_MAX;
for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
        int lech=abs(a[i]- a[j]);
        if(lech <cnt)
            cnt=lech;
        }
    }
    cout<<cnt;
}



