#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

/*bool anagram(string &s1,string &s2){
    if(s1.length() != s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1 == s2);

}*/

bool anaOfStr(string &s1,string &s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if(count[i] != 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    string s1 = "abaac";
    string s2 = "acaba";
    cout<<anaOfStr(s1,s2)<<endl;
}