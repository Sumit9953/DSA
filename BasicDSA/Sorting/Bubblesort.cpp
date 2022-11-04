#include<iostream>
using namespace std;

void Bubblesort(int *arr,int n){
     for (int i = 1; i <= n; i++)
     {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
     }
     
}

int main(){
    int arr[] = {1,3,2,5,4,1};
    Bubblesort(arr,6);
    for(int x:arr){
        cout<<x<<" ";
    }
}