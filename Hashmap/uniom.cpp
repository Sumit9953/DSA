#include<iostream>
#include<unordered_set>
using namespace std;

int unionOfarr(int *a1,int *a2,int m,int n){
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < n; i++)
    {
       s.insert(a2[i]);
    }    
    return s.size();
}

int main()
{
int arr1[] = {15,20,5,15};
int arr2[] = {15,15,15,20,10};
cout<<unionOfarr(arr1,arr2,4,5);

}