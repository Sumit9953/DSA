#include<iostream>
using namespace std;

int getmax(int arr[],int size){
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        for (int j = i-1; j >= 0; j--)
        {
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }else{
                break;
            }
        }
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}

int main(){
    int arr[] = {6,2,5,4,1,5,6};
    cout<<getmax(arr,7);
}