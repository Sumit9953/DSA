#include<iostream>
using namespace std;

int trapwater(int arr[],int n){
    int res = 0;
    for (int i = 1; i < n-1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax,arr[j]);
        }
        int rmax = arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax = max(rmax,arr[j]);
        }
        
        res = res + (min(lmax,rmax)-arr[i]);
    }
    return res;
}

int main(){
    int arr[] = {10,20,30};
    cout<<trapwater(arr,3)<<endl;

}