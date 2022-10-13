#include<iostream>
#include<string.h> 
using namespace std;

bool subseq(string &s1,string &s2){
    int i = 0;
    int j = 0;
    bool res = false;
    while (i<s1.length() && j<s2.length())
    {
        if(s1[i] == s2[j]){
            j++;
        }
        i++;
        
    }
    return (j == s2.length());
}

int main(){
 string s = "geekforgees";
 string s2 = "grkges";
 cout<<subseq(s,s2);
}