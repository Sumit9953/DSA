#include<iostream>
#include<string.h>
using namespace std;

void Patternof(string &text,string &pattern){
    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i <= n-m; i++)
    {
        int j;
        for (int j = 0; j < m; j++)
        {
            if(pattern[j] != text[i+j]){
                break;
            }
        }
        if(j == m){
            cout<<i<<"yggib";
        }
        
    }
    
}

int main(){
        string text = "aabcaagfvz";
        string pattern = "caa";
        Patternof(text,pattern);
}