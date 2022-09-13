#include <iostream>
using namespace std;

int move(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    return n;
}

int main(){
    int arr[] = {10,8,0,10,0,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int size = move(arr,n);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}