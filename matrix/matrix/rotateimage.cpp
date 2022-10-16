#include<iostream>
using namespace std;

void print(int a[][100],int n){
       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }    
        cout<<endl;
    } 
}

void transpose(int a[][100],int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
          swap(a[i][j],a[j][i]);
       }
       
    }
    for (int i = 0; i < n; i++)
    {
        int low = 0,high = n-1;
        while (low<high)
        {
            swap(a[i][low],a[i][high]);
            low++;
            high--;
        }
    }
    
}



int main(){
    int arr[100][100];
    int m,n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }    
    } 
     transpose(arr,n);
    print(arr,n);
}