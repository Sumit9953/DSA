#include<iostream>
using namespace std;

void Pair(int *arr,int n){
    int res = 0;
    int arr2[n] = {0};
    arr2[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr2[i] = arr2[i-1]+arr[i];
    }
     
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = i > 0 ? arr2[j] - arr2[i-1] : arr2[j];
            res = max(res,sum);
        }
        
    }
    cout<<res<<" ";
}


int main(){
    int arr[] = {1,2,3};
    Pair(arr,3);

}