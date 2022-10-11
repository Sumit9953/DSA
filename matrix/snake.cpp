#include<iostream>
using namespace std;

void snake(int a[][100],int m,int n){
    for (int i = 0; i < m; i++)
    {
        if(i%2 == 0){
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;  
        }else{
             for (int j = n-1; j >= 0; j--)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
}

int main(){
    int arr[100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    snake(arr,m,n);
    
}