#include<iostream>
#include<string.h>
using namespace std;

int pattern(string &s1,string &s2){
    int m = s1.length();
    int n = s2.length();
    for (int i = 0; i <= m-n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if(s1[i+j] != s2[j]){
                break;
            }
        }
        if(j == n){
            return i;
        }
    }
    
}

int main(){
    string s1 = "abgcdabcd";
    string s2 = "abcd";
    cout<<endl;
    cout<<pattern(s1,s2)<<endl;
    return 0;
}
