#include<iostream>
using namespace std;

void reverse(int arr[],int low,int high){
    while (low<high)
    {
       swap(arr[low],arr[high]);
       low++;
       high--;
    }
    
}

void leftrotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}


int main(){
    int arr[] = {2,4,3,6,5,8,7};
    leftrotate(arr,7,2);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}