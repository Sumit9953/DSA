#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int m,int n){
    for (int i = 0; i < m; i++)
    {
        if(i > 0 && arr1[i] == arr1[i-1]){
        continue;
        }else{
        for (int j = 0; j < n; j++)
        {
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
        
    }
    }
    
}

void Intersection(int arr1[],int arr2[],int m,int n){
    int i =0,j=0;
    while(i<m && j<n){
           if(i>0 && arr1[i] == arr1[i-1]){
                i++;
                continue;
            }
            if(arr1[i]<arr2[j]){
                i++;
            }else if(arr1[i]>arr2[j]){
                j++;
            }else{
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }
    }
}

int main(){
    int arr1[] ={1,1,2,3,4,4,5};
    int arr2[] ={2,4,4,5};
    Intersection(arr1,arr2,7,4);

}