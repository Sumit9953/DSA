#include<iostream>
using namespace std;

int Lis(int *arr,int n){
    int tail[n];
    for (int i = 0; i < n; i++)
    {
        tail[i] = arr[i];
        for (int j = 0; j < i; j++)
        {
            if(arr[j]<arr[i]){
                tail[i] = max(tail[i],tail[j]+arr[i]);
            }
        }
        
    }
    int res = tail[0];
    for(int x:tail){
        res = max(res,x);
    }
    return res; 

}

int main(){
    int arr[] = {3,20,4,6,7,30};
    cout<<Lis(arr,6);
}