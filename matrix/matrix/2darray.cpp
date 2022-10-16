#include<iostream>
using namespace std;

void print(int a[][100],int m,int n){
       for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }    
        cout<<endl;
    } 
}

int main(){
    int arr[100][100];
    int arr1[2][3] ={{1,2,3},{1,2,3}};
    int m,n;
    cin>>m>>n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }    
    } 
    print(arr,m,n);
}