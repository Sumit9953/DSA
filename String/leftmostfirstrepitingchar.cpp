#include<iostream>
using namespace std;

int leftmost(string &s1){
    int count[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if(count[s1[i]] > 1){
            return i;
        }
    }
    return -1;
    
}

int main(){
  string s1 = "abccd";
  cout<<leftmost(s1)<<endl;
}