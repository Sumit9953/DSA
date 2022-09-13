#include<iostream>
using namespace std;


int main(){
    int arr[] ={20,8,7,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int j =0;j<n;j++){
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    }
     for(int x:arr){
        cout<<x<<" ";
    }
}