#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void fillarray(int *arr,int i,int n,int val){
    if(i == n){
        print(arr,n);
        return;
    }
    arr[i] = val;
    fillarray(arr,i+1,n,val+1);
    arr[i] = arr[i]*-1;
}

int main(){
    int arr[1000] = {0};
    int n;
    cin>>n;
    fillarray(arr,0,n,1);
    print(arr,n);
    return 0;
}
