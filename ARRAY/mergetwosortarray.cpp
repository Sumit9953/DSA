#include<iostream>
using namespace std;

void merge(int a[],int b[],int out[],int n,int m){
 int i = 0;
 int j = 0;
 int k = 0;

 while (i<n && j<m)
 {
    if(a[i]<b[j]){
        out[k] = a[i];
        i++;
    }else{
        out[k] = b[j];
        j++;
    }
    k++;
 }

 while (i<n)
 {
    out[k] = a[i];
    i++;
    k++;
 }
 while (j<m)
 {
    out[k] = b[j];
    j++;
    k++;
 }
 
    
}

int main(){
    int arr[1000] = {2,4,6,8,10};
    int arr1[1000] = {1,3,5,7,9};

    int output[1000];
    merge(arr,arr1,output,5,4);
    for (int i = 0; i < 9; i++)
    {
        cout<<output[i]<<" ";
    }
    
}