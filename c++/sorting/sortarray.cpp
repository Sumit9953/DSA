
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);

    for(int x:arr){
        cout<<x<<" ";
    }


}