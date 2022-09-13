#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<*(arr+1)<<" ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}