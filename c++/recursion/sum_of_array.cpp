#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n == 0){
        return n;
    }
    return arr[0]+sum(arr+1,n-1);
}


int main(){
    int arr[] {9,8,9,4};
    int n = 4;
    cout<<sum(arr,n)<<" ";
}