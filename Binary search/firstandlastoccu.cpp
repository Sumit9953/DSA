#include <iostream>
using namespace std;

int first_occurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int ans1 = -1;
    while (s <= e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == k){
            ans = mid;
            e = mid-1; //for first occurence
            s = mid+1;//for last occurence
        }
      
        else if(arr[mid]<k){
            s = mid+1;
        }else {
            e = mid-1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,8,8,8,8,9,10};
    cout<<first_occurence(arr,9,8);
}