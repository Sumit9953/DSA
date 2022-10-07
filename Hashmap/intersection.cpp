#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int intersction(int *a1,int *a2,int m,int n){
    int j = 0;
    unordered_map<int,bool> map;
    for (int i = 0; i < m; i++)
    {
       if(map.count(a1[i])>0){
        map[a1[i]] = false;
        continue;
       }else{
       map[a1[i]] = true;
       }
    }
    for (int i = 0; i < n; i++)
    {
       if(map.count(a2[i])>0){
        j++;
        map.erase(a2[i]);
       }
    }
    return j;
}

int main()
{
int arr1[] = {10,20,10};
int arr2[] = {10,10,20};
intersction(arr1,arr2,3,3);

}