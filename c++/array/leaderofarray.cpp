#include <iostream>
using namespace std;


// int leder(int arr[],int n){
//     int currn_lead = {arr[n-1]};
//     cout<<currn_lead<<endl;
//     for (int i = n-2; i >= 0; i--)
//     {
//        if(currn_lead<arr[i]){
//         currn_lead = arr[i];
        
//        }
//     }
    
// }
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int Leder(int arr[],int n){
for (int i = 0; i < n; i++)
{
    bool flag = false;
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]<=arr[j]){
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout<<arr[i]<<endl;
    }
}

}

int main()
{
    int arr[] = {7,10,4,3,6,5,2};
    Leder(arr, 7);
}