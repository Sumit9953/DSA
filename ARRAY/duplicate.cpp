#include<iostream>
using namespace std;

int duplicate(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i < n; i++)
        {
            if(i != j && a[i] == a[j]){
                return a[i];
            }
        }
        
    } 
}
//TIME Complectcity O(n)----
//Condition lies b/w 0 to n-2 ------------
int findduplicate(int a[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+a[i];
    }

   int sumofnaturalNum = ((n-1)*(n-2))/2;
   cout<<sum-sumofnaturalNum;

}


int main(){
    int arr[1000];
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    findduplicate(arr,n);

    return 0

}
