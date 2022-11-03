#include<iostream>
using namespace std;

int linearsearch(int *arr,int n,int x){
    for (int i = n-1; i >= 0; i--)
    {
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<linearsearch(arr,7,5)<<endl;;
}