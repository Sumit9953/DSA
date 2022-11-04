#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a > b;
}


int main(){
    int arr[] = {1,3,2,5,4,1};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n,greater<int> ());
    
    // sort(arr,arr+n,compare);

    // reverse(arr,arr+n);
    for(int x:arr){
        cout<<x<<" ";
    }
}