#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool Anagram(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int Charr[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        Charr[s1[i]]++;
        Charr[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if(Charr[i]>0){
            return false;
        }
    }
    
    return true;
}

bool anagram(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1 == s2;
}

int main(){
        string s1 = "aabcaa";        
        string s2 = "abbcaa";        
        cout<<Anagram(s1,s2);
}