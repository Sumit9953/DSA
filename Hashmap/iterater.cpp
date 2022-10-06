#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
unordered_map<string,int> ourmap;
ourmap["abc"] = 1;
ourmap["abc1"] = 2;
ourmap["abc2"] = 3;
ourmap["abc3"] = 4;
ourmap["abc4"] = 5;

unordered_map<string,int>::iterator it = ourmap.begin();
while (it != ourmap.end())
{
    cout<<"key "<<it->first<<" value "<<it->second<<endl;
    it++;
}

unordered_map<string,int>::iterator it1 = ourmap.find("abc");
ourmap.erase(it1,ourmap.end());

unordered_map<string,int>::iterator it2 = ourmap.begin();
while (it2 != ourmap.end())
{
    cout<<"key "<<it2->first<<" value "<<it2->second<<endl;
    it2++;
}
}