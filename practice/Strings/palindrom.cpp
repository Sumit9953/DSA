#include<iostream>
#include<string.h>
using namespace std;

bool Palindrom(string s,int start,int end){
    if(start > end){
       return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return Palindrom(s,start+1,end-1);
    
}

int main(){
        string s = "aabcaa";
        cout<<Palindrom(s,0,5);
}