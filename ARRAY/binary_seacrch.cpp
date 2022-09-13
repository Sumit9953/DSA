#include<iostream>
using namespace std;

int binary(int a[],int n,int key){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid]>key){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }

    return -1;
}




int main(){
    int arr[1000];
    int n,key;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Key to be search"<<endl;
    cin>>key;
    
    cout<<binary(arr,n,key)<<endl;

}