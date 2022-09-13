#include<iostream>
using namespace std;



void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
//1 st method
// int leftrotateByOne(int arr[], int n)
// {
//     int temp=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//        arr[i-1] = arr[i];
//     }
//        arr[n-1] = temp;
// }
// int rotatebyD(int arr[],int n,int d){
//     for (int i = 0; i < d; i++)
//     {
//         leftrotateByOne(arr,n);
//     }
    
// }



int reverse(int arr[],int low,int high){
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
int main()
{
    int arr[] = {3, 5, 7, 8, 9, 4};
    cout << " Before " << endl;
    print(arr, 6);
    leftrotate(arr, 6,3);
    cout << " after " << endl;
    print(arr, 6);
}