#include<iostream>
#include<algorithm>
using namespace std;

void Union(int arr1[],int arr2[],int m,int n){
 int temp[m+n];
 
 for(int i = 0;i<m;i++){
     temp[i] = arr1[i];
 }
 for(int j = 0;j<n;j++){
     temp[m+j] = arr2[j];
 }
 sort(temp,temp+m+n);
 for(int i =0;i<m+n;i++){
     if(i==0 || temp[i]!= temp[i-1]){
         cout<<temp[i]<<" ";
     }
 }
}

int main(){
    int arr1[] ={10,20,30};
    int arr2[] ={5,20,40,40};
    Union(arr1,arr2,3,4);

}