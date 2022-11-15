#include<iostream>
using namespace std;

void leader(int *arr,int n){
    int cuur_leader = arr[n-1];
    cout<<cuur_leader<<" ";
    for (int i = n-2; i >= 0; i--)
    {
        if(cuur_leader < arr[i]){
            cuur_leader = arr[i];
            cout<<cuur_leader<<" ";
        }
    }
    
}

int main(){
    int arr[] = {7,10,4,10,4,5,2};
    leader(arr,7);
}