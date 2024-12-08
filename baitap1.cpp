#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int n; int a[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    ll tongle=0;
    ll tongchan=0;
    int chan=0;
    int le=0;
    for (int i=0;i<n;i++){
        if(a[i]%2==0){
            ++chan;
            tongchan+=a[i];
        }

    else {
        le++;
        tongle+=a[i];
    }

}
    cout<<chan<<endl;
    cout<<le<<endl;
    cout<<tongchan<<endl;
    cout<<tongle<<endl;
    return 0;
}