#include<iostream>
#include<vector>
using namespace std;

void counting(int *arr,int n){
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest,arr[i]);
    }
    vector<int> freq(largest+1,0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            j++;
            freq[i]--;
        }
        
    }
    
    
}

int main(){
    int arr[] = {1,3,21,1,2,1,0,5,4,1};
    counting(arr,10);
    for(int x:arr){
        cout<<x<<" ";
    }
}