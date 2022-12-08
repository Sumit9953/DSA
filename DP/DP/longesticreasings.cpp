#include<iostream>
using namespace std;

int ceilIndex(int *tail,int l,int r,int x){
    while(l<r){
        int mid = l+(r-l)/2;
        if(tail[mid] >= x){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    return r;
}

int Lis(int *arr,int n){
    int tail[n] , len = 1;

    tail[0] = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i] > tail[len-1]){
            tail[len] = arr[i];
            len++;
        }else{
            int c = ceilIndex(tail,0,len-1,arr[i]);
            tail[c] = arr[i];
        }
    }
    return len;
}

int main(){
    int arr[] = {3,10,20,4,6,7};
    cout<<Lis(arr,6);
}