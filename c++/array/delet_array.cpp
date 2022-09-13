#include<iostream>
using namespace std;

int deleteelement(int arr[],int n,int x){
    int i;
    for ( i = 0; i < n; i++)
    {
        if(arr[i] == x){
            break;
        }
        if(i == n){
            return n;
        }
    }
    for (int j = i; j < n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    return n-1;
}

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    cout<<"Before"<<endl;
    print(arr,n);
    int N = deleteelement(arr,n,x);
    cout<<"After"<<endl;
    print(arr,N);
}