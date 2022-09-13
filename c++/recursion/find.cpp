#include<iostream>
using namespace std;

bool find(int arr[],int n,int x){
  if(n == 0){
    return false;
  }
   if(arr[0] == x){
    return true;
  }
  bool small =  find(arr+1,n-1,x);
  return small;
 

}


int main(){
    int arr[] {9,7,10,4};
    int n = 4;
    int x = 8;
    cout<<find(arr,n,x)<<" ";
}