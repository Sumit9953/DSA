#include<iostream>
using namespace std;

void insertion(int *arr,int n){
for (int i = 1; i < n; i++)
{
    int temp = arr[i];
    int j = i-1;
    while (j >= 0 and arr[j] > temp)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

}

int main(){
    int arr[] = {1,3,2,5,4,1};
    insertion(arr,6);
    for(int x:arr){
        cout<<x<<" ";
    }
}