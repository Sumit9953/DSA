#include<iostream>
using namespace std;

int Binarysearch(int *arr,int n,int x){
    int st = 0;
    int ed= n-1;

    while (st <= ed)
    {
        int mid = (st+ed)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid]> x){
            ed = mid-1;
        }else{
            st = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<Binarysearch(arr,7,5)<<endl;;
}