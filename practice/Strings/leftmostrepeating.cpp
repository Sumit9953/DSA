#include<iostream>
#include<string.h>
#include<climits>
using namespace std;

int leftmost(string s){
    int charArray[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        charArray[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(charArray[s[i]] > 1){
            return i;
        }
    }
    
    return -1;
}

int leftMostRepeating(string s){
    int arr[256];
    fill(arr,arr+256,-1);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        int fi = arr[s[i]];
        if(fi == -1){
            arr[s[i]] = i;
        }else{
            res = min(res,fi);
        }
    }
    return (res == INT_MAX ? -1 : res);
}

int main(){
        string s = "abccd";
        cout<<leftMostRepeating(s);
}