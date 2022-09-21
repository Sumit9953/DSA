#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

void mergeTwo(int arr1[],int arr2[],int n,int m){
    vector<int>temp;
    int i = 0;
    while(i<n){
        temp.push_back(arr1[i]);
        i++;
    }
    int j = 0;
    while(j<m){
        temp.push_back(arr2[j]);
        j++;
    }
    sort(temp.begin(),temp.end());
    for(int i =0;i<9;i++){
        cout<<temp[i]<<" ";
    }
}

void merge(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    while (i<n && j<m)
    {
        if(arr1[i]>=arr2[j]){
           cout<<arr2[j]<<" ";
           j++;
        }else{
            cout<<arr1[i]<<" ";
            i++;
        }
    }
    while(i<n){
        cout<<arr1[i]<<" ";
        i++;
    }
     while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
    
}

int main(){
    int arr1[] = {1,3,5,7,8,9};
    int arr2[] = {2,4,5,6};
    merge(arr1,arr2,6,4);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

}