#include<iostream>
using namespace std;

void move(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            for (int j = i+1; j < n; j++)
            {
                if(arr[j] != 0){
                    swap(arr[i],arr[j]);
                }
            }
            
        }
    }
    
}

void moveZero(int *arr,int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    
}

int main(){
    int arr[] = {1,2,0,0,3,5,0,4};
    moveZero(arr,8);

    for(int x: arr){
        cout<<x<<" ";
    }
}