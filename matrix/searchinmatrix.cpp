#include<iostream>
using namespace std;

void search(int a[][100],int m,int n,int x){
    int top = 0;
    int right = n-1;
    while (top < m && right >= 0)
    {
        if(a[top][right] == x){
            cout<<"row "<<top<<" colum "<<right;
        }else if(a[top][right]>x){
            right--;
        }else{
            top++;
        }
    }
    cout<<"Not found!";
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
    search(arr,m,n,6);
}