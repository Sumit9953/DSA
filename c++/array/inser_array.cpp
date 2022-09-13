#include<iostream>
using namespace std;

int insert(int arr[],int n ,int x,int pos,int cap){
    if(n == cap){
        return n;
    }
    int ind = pos-1;
    int i;
    for ( i = n-1; i >= ind; i--);
    {
        arr[i+1] = arr[i];
        arr[ind] = x;
    }
    return (n+1);
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
    int pos = 2;
    int cap = 10;
    cin>>x;
    cout<<"Before"<<endl;
    print(arr,n);
    int N = insert(arr,n,x,pos,cap);
    cout<<"After"<<endl;
    print(arr,N);
}