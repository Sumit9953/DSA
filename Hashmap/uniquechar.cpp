#include<iostream>
#include<vector>
#include<string.h>
#include<unordered_map>
using namespace std;

string unique(string s){
    string str;
    unordered_map<char,int> one;
    for (int i = 0; i < s.size(); i++)
    {
        if(one.count(s[i])>0){
            continue;
        }
        one[s[i]] = 1;
        str.push_back(s[i]);
    }
    return str;
}

int main()
{
string s = "abcdaddcbh";
string str = unique(s);
cout<<str;
}