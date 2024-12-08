#include <iostream>
using namespace std;

tong(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+tong(n-1);
    }
}
int main (){
    int n;
    cin>>n;
    cout<< tong(n)<<endl;
}
