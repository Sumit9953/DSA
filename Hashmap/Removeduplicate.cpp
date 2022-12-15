#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeduplicate(int *arr,int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for (int i = 0; i < size; i++)
    {
        if(seen.count(arr[i])>0){
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}

int main()
{
    int arr[] = {1,2,3,2,1,5};
    vector<int> out;
    out = removeduplicate(arr,6);
    for(int x:out){
        cout<<x<<" ";
    }
    return 0;
}
