// #include<iostream>
// #include<vector>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr = {10,50,20,5};
// sort(arr.begin(),arr.end());
//  for(int x: arr){
//     cout<<x<<" ";
//  }
cout<<endl;
sort(arr.begin(),arr.end(),greater<int>());
for(int x: arr){
    cout<<x<<" ";
 }
}