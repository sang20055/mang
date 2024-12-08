#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv){
    int m,n;
    srand(time(NULL));
    cout<<"Nhap so hang: ";
    cin>>m;
    cout<<"Nhap so cot: ";
    cin>>n;
    int M[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            M[i][j]=rand()%100;
        }
    }
    cout<<"Mang sau khi da nhap ngau nhien:\n";
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}