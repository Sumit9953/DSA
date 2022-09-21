// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       int min = i;
       for (int j = i; j < n; j++)
       {
        if(arr[j]<arr[min]){
            min = j;
        }
        
       }
       swap(arr[i],arr[min]);
    }
    
}

int main(){
    int arr[] = {30,10,5,1,20,6};
    selectionsort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}