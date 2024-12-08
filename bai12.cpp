 #include<iostream>
 using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10000];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int max1=INT_MIN; int max2=INT_MIN;
    for (int i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]<max1 && a[i]>max2){
            max2=a[i];
        }
    }
    cout<<max1<<" "<<max2;
}