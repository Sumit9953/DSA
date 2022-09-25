#include<iostream>
#include<vector>
using namespace std;

double maximum(vector<int> &arr,int k){
    double windowsum = 0;
    int result = 0;
    int finalres = 0;
    int windowstart = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        windowsum += arr[i];
        if(i >= k-1){
            result = windowsum;
            windowsum -= arr[windowstart];
            windowstart++;
        }
            finalres = max(finalres,result);
    }
    cout<<finalres<<" ";
}

int main(){
    vector<int> arr = {2, 3, 4, 1, 5};
    maximum(arr,2);
}