#include<iostream>
using namespace std;

void Reverse(int *arr,int n){
    int st = 0;
    int ed = n-1;
    while (st <= ed)
    {
        swap(arr[st],arr[ed]);
        st++;
        ed--;
    }
    
    
}

int main(){
    int arr[] = {1,2,3,4,5,6};

    Reverse(arr,6);
    
    for(int x: arr){
        cout<<x<<" ";
    }
}