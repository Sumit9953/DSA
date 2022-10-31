#include<iostream>
#include<string>
using namespace std;

bool palindrom(string s,int st,int end){
    if(end+1 <= 1){
        return true;
    }
    bool small = palindrom(s,st+1,end-1);
    return ((s[st] == s[end]) && small);
    
}

int main(){
    string s = "abacba";
    cout<<palindrom(s,0,4)<<" ";
}