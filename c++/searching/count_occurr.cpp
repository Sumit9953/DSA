#include<iostream>
using namespace std;

int seconde(int arr[],int n,int x){
int res = 0;
for(int i =0;i<n;i++){
    if(arr[i] == x){
        res++;
    }else{
        return -1;
    }
    
}
return res;
}


int main(){
int arr[] = {10,10,10,10,50,50};
int n = sizeof(arr)/sizeof(arr[0]);
int x =50;
cout<<seconde(arr,n,x)<<endl;

}