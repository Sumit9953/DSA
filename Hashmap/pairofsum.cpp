#include<iostream>
#include<unordered_set>
using namespace std;

bool pairof(int*a,int n,int sum){
    bool res = false;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if(s.find(sum-a[i]) != s.end()){
            return true;
        }
        s.insert(a[i]);
    }
    return false;
}


int main()
{
int arr[] = {3,2,7,15,-8};
cout<<pairof(arr,5,9);
}