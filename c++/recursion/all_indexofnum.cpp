#include<iostream>
using namespace std;

int findex(int arr[],int n ,int x,int output[]){
    if(n == 0){
        return 0;
    }
    int ans = findex(arr,n-1,x,output);
   if(arr[n-1] == x){
    return ans+1;
   }else{
    return ans;
   }
    
}

int main(){
    int arr[] = {5,6,5,5,6};
    int output[5];
    int n = 5;
    int x = 6;
    cout<<findex(arr,n,x,output);

}