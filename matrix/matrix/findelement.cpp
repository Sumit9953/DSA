#include<iostream>
using namespace std;

void findele(int a[][100],int m,int n,int x){
    int i = 0,j=n-1;
    while (i < m && j >= 0)
    {
        if(a[i][j] == x){
            cout<<i<<" "<<j;
            return;
        }else if(a[i][j]<x){
            i++;
        }else{
            j--;
        }
    }
    cout<<"-1";
}

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
    int x;
    cin>>x;
    findele(arr,m,n,x);
}