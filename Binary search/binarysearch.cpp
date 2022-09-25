#include<iostream>
using namespace std;

int binary(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
        if(arr[mid]>k){
            end = mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {2,4,6,8,9};
    cout<<binary(arr,5,10);
}