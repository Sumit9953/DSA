#include<iostream>
using namespace std;

void Pair(int *arr,int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            res = max(res,sum);
        }
        
    }
    cout<<res<<" ";
}
void Pair(int *arr,int n){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
               cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
}


int main(){
    int arr[] = {1,2,3};
    Pair(arr,3);

}