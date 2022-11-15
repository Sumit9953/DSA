#include<iostream>
using namespace std;

int secondeLargest(int *arr,int n){
    int largest = 0,res = -1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }else if(arr[i]<arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return arr[res];
}

int main(){
    int arr[] = {4,2,6,9,8,4,9};
    cout<<secondeLargest(arr,7)<<endl;
}