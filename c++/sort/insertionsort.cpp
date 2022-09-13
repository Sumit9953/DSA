#include<iostream>
using namespace std;

int main(){
    int arr[]={20,5,40,60,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j =i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =key;
    }
     for(int x:arr){
        cout<<x<<" ";
    }
}