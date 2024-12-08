#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int b,c;
    int res=-1;
    int min= INT_MAX;
    
    int n; ll a[100000];
    cin>>n;
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    for (int i=0;i<n;i++){
        if(res<a[i]){
            res=a[i];
            b=i;
        }
    }
    cout<<b<<" ";
    for (int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            c=i;
        }
    }
    cout<<c;
    return 0;
}