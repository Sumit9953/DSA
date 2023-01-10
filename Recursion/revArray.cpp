#include<iostream>
#include<vector>
using namespace std;

void f(int i,int j,int arr[]){
   if(i >= j){
    return;
   }
   swap(arr[i],arr[j]);

   f(i+1,j-1,arr);
}


int main(){

    int arr[] = {1,2,3,4,5};
     
    f(0,4,arr);

    for(int x : arr){
        cout<<x<<" ";
    }

    return 0;
}