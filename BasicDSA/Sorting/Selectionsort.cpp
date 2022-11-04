#include<iostream>
using namespace std;

void selection(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    
}

int main(){
    int arr[] = {1,3,2,5,4,1};
    selection(arr,6);
    for(int x:arr){
        cout<<x<<" ";
    }
}