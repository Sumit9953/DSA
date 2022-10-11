#include<iostream>
using namespace std;

void spiral(int a[][100],int m,int n){
    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;

    while (top <= bottom && left<=right)
    {
        for (int i = left; i <= right; i++)
        {
            cout<<a[top][i]<<" ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout<<a[i][right]<<" ";
        }
        right--;
        if(top <= bottom){
            for (int i = right; i >= left; i--)
            {
                cout<<a[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left <= right){
            for (int i = bottom; i >= top; i--)
            {
                cout<<a[i][left]<<" ";
            }
            left++;
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
    spiral(arr,m,n);
}