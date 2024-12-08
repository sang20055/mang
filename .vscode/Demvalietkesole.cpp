#include <iostream>
using namespace std;
bool le( int n){
   while (n){
    int r = n%10;
    if(r %2 == 0) return false;
    n /=10;
   }
   return true;
}
int main(){
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum =0;
    for (int i=0;i<n;i++){
         if(le(a[i])){
                cout<<a[i]<<' ';
                sum++;
            }
            
         }
    
    cout<<endl;
    cout<<sum;

}