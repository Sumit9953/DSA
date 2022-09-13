#include<iostream>
using namespace std;

int index(int arr[],int n,int x){
    if(n == 0){
        return -1;
    }
    if(arr[0] == x){
        return 0;
    }
    int ans = index(arr+1,n-1,x);
    if(ans == -1){
        return -1;
    }else{
        return ans+1;
    }
}

int main(){
    int arr[] = {9,9,10,7};
    int n = 4;
    int x = 10;
    cout<<index(arr,n,x);
}