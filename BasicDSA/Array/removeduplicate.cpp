#include<iostream>
using namespace std;

int remove(int *arr,int n){
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != temp[res-1]){
            temp[res] = arr[i];
            res++;
        }
    }
    
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    
    return res;
}

int removeduplicate(int *arr,int n){
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[res-1] != arr[i]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main(){
    int arr[] = {1,2,2,2,5,6,7};
    int in = removeduplicate(arr,7);

    for (int i = 0; i < in; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}