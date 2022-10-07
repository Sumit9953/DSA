#include<iostream>
#include<unordered_set>
using namespace std;

int intersection(int *a1,int *a2,int m,int n){
    unordered_set<int> set;
    for (int i = 0; i < m; i++)
    {
        set.insert(a1[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
       if(set.find(a2[i]) != set.end()){
        res++;
        set.erase(a2[i]);
       }
    }
    
    return res;
}

int main()
{
int arr1[] = {10,20,10,30};
int arr2[] = {10,10,20};
cout<<intersection(arr1,arr2,4,3);

}