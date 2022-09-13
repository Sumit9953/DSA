#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int main(){
//     int arr[] = {10,20,5,7};
// int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);

//     for(int x:arr){
//         cout<<x<<" ";
//     }

//     sort(arr,arr+n,greater<int>());
// cout<<endl;
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// }

//----SORT IN VECTOR------
int main(){
    vector<int>v = {5,7,20,10};
    // sort(v.begin(),v.end());
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v){
        cout<<x<<" ";
    }

}