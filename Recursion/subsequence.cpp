#include<iostream>
#include<vector>
using namespace std;

void f(int ind,int n,int arr[],vector<int> &ds){
    if(ind == n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    f(ind+1,n,arr,ds);
    ds.push_back(arr[ind]);
    f(ind+1,n,arr,ds);
    ds.pop_back();

}


int main(){
    int arr[] = {3,1,2};
    vector<int> ds;
    f(0,3,arr,ds);
    return 0;
}