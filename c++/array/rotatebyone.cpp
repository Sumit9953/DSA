#include<iostream>
using namespace std;



void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int leftrotateByOne(int arr[], int n)
{
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
       arr[i-1] = arr[i];
    }
       arr[n-1] = temp;
}

int main()
{
    int arr[] = {3, 5, 7, 8, 9, 4};
    cout << " Before " << endl;
    print(arr, 6);
    leftrotateByOne(arr, 6);
    cout << " after " << endl;
    print(arr, 6);
}