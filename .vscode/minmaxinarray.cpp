#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int res = INT_MIN;
    for (int i=1;i<n;i++){
        if(a[i]>res){
            res = a[i];
        }
    }
    cout<<"MAX: "<<res<<endl;
    for (int i=1;i<n;i++){
        if(a[i]<res){
            res = a[i];
        }
    }
    cout<<"MIN: "<<  res<<endl;
}