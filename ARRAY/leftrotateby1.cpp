#include<iostream>
using namespace std;

void leftrotateby1(int arr[],int n){
    int temp = arr[0];
    for (int i = 1; i <= n; i++)
    {
        arr[i-1] = arr[i];
        arr[n-1] = temp;
    }
    
}

void leftrotatebyd(int arr[],int n,int d){
    for (int i = 0; i < d; i++)
    {
        leftrotateby1(arr,n);
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    leftrotatebyd(arr,8,2);
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
