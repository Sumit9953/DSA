#include<iostream>
using namespace std;

int recoverArray(int a[],int n,int output[]){
    int left,right;
    int mid = n/2;
    int i =0;
    if(n%2 != 0){
        output[mid] = a[i];
        left = mid-1;
        right = mid+1;
        i++;
    }else{
        left = mid-1;
        right = mid;
    }

    
    while (i < n)
    {
        output[left] = a[i];
        left--;
        i++;
        output[right] = a[i];
        right++;
        i++;
    }
    
}


int main(){
    int arr[1000];
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int output[1000];
    recoverArray(arr,n,output);
    for (int i = 0; i < n; i++)
    {
        cout<<output[i]<<" ";
    }
    
}