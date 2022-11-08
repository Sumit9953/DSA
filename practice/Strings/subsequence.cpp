#include<iostream>
#include<string.h>
using namespace std;

bool Subsequence(string s1,string s2,int n,int m){
        if(m == 0){
            return true;
        }
        if(n == 0){
            return false;
        }
        if(s1[n-1] == s2[m-1]){
            return Subsequence(s1,s2,n-1,m-1);
        }else{
            return Subsequence(s1,s2,n-1,m);
        }
}

bool subsquence(string s1,string s2){
    int i = 0,j = 0;
    while (i < s1.length() && j < s2.length())
    {
        if(s1[i] == s2[j]){
            i++;
            j++;
        }else{
            i++;
        }
    }
    return (j == s2.length());
}

int main(){
        string s1 = "aabcaa";
        string s2 = "acb";
        int n = s1.length();
        int m = s2.length();
        cout<<Subsequence(s1,s2,n,m);
}